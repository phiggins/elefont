gem "minitest"
require "minitest/autorun"
require "elefont"

class TestElefont < Minitest::Test
  def test_best_match_finds_the_best_match_for_common_fonts
    actual = Elefont.best_match("Menlo")
    assert_equal 'DejaVuSans.ttf', actual.split('/').last
  end

  def test_best_match_provides_a_good_default
    actual = Elefont.best_match("NotARealFontName")
    assert_equal 'DejaVuSans.ttf', actual.split('/').last
  end

  def test_best_match_works_with_arial
    actual = Elefont.best_match("Arial")
    assert_equal 'Arial.ttf', actual.split('/').last
  end

  def test_best_match_works_with_courier
    actual = Elefont.best_match("Courier")
    assert_equal 'Courier_New.ttf', actual.split('/').last
  end
end
