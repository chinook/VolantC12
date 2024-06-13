/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/ui_page2_screen/UI_page2ViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

UI_page2ViewBase::UI_page2ViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setPosition(0, 0, 800, 480);
    background.setOrigin(0.0f, 0.0f);
    background.setScale(1.0f, 1.0f);
    background.setAngle(0.0f);
    backgroundPainter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    background.setPainter(backgroundPainter);
    const touchgfx::AbstractShape::ShapePoint<float> backgroundPoints[4] = { { 0.0f, 0.0f }, { 800.0f, 0.0f }, { 800.0f, 480.0f }, { 0.0f, 480.0f } };
    background.setShape(backgroundPoints);
    add(background);

    header_page2_container.setPosition(0, 0, 800, 48);
    header_p2_box.setPosition(0, 0, 800, 48);
    header_p2_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    header_p2_box.setBorderColor(touchgfx::Color::getColorFromRGB(50, 82, 123));
    header_p2_box.setBorderSize(2);
    header_page2_container.add(header_p2_box);

    page2_num_text.setXY(735, 12);
    page2_num_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    page2_num_text.setLinespacing(0);
    page2_num_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3I29));
    header_page2_container.add(page2_num_text);

    add(header_page2_container);

    power_container.setPosition(0, 48, 400, 144);
    power_box.setPosition(0, 0, 400, 144);
    power_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    power_box.setBorderColor(touchgfx::Color::getColorFromRGB(50, 82, 123));
    power_box.setBorderSize(2);
    power_container.add(power_box);

    power_text.setPosition(92, 32, 225, 61);
    power_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    power_text.setLinespacing(0);
    Unicode::snprintf(power_textBuffer, POWER_TEXT_SIZE, "%s", touchgfx::TypedText(T_POWER_TEXT).getText());
    power_text.setWildcard(power_textBuffer);
    power_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_79HL));
    power_container.add(power_text);

    power_title.setXY(11, 111);
    power_title.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    power_title.setLinespacing(0);
    power_title.setTypedText(touchgfx::TypedText(T___SINGLEUSE_41C3));
    power_container.add(power_title);

    add(power_container);

    efficiency_container.setPosition(400, 48, 400, 144);
    efficiency_box.setPosition(0, 0, 400, 144);
    efficiency_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    efficiency_box.setBorderColor(touchgfx::Color::getColorFromRGB(50, 82, 123));
    efficiency_box.setBorderSize(2);
    efficiency_container.add(efficiency_box);

    efficiency_text.setPosition(92, 32, 225, 61);
    efficiency_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    efficiency_text.setLinespacing(0);
    Unicode::snprintf(efficiency_textBuffer, EFFICIENCY_TEXT_SIZE, "%s", touchgfx::TypedText(T_EFFICIENCY_TEXT).getText());
    efficiency_text.setWildcard(efficiency_textBuffer);
    efficiency_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LN6I));
    efficiency_container.add(efficiency_text);

    efficiency_title.setXY(10, 111);
    efficiency_title.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    efficiency_title.setLinespacing(0);
    efficiency_title.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0H6S));
    efficiency_container.add(efficiency_title);

    add(efficiency_container);

    tsr_container.setPosition(0, 192, 400, 144);
    tsr_box.setPosition(0, 0, 400, 144);
    tsr_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tsr_box.setBorderColor(touchgfx::Color::getColorFromRGB(50, 82, 123));
    tsr_box.setBorderSize(2);
    tsr_container.add(tsr_box);

    tsr_text.setPosition(92, 36, 225, 61);
    tsr_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tsr_text.setLinespacing(0);
    Unicode::snprintf(tsr_textBuffer, TSR_TEXT_SIZE, "%s", touchgfx::TypedText(T_TSR_TEXT).getText());
    tsr_text.setWildcard(tsr_textBuffer);
    tsr_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YIFS));
    tsr_container.add(tsr_text);

    tsr_title.setXY(11, 108);
    tsr_title.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tsr_title.setLinespacing(0);
    tsr_title.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XN6H));
    tsr_container.add(tsr_title);

    add(tsr_container);

    empty4_container.setPosition(400, 192, 400, 144);
    empty4_box.setPosition(0, 0, 400, 144);
    empty4_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    empty4_box.setBorderColor(touchgfx::Color::getColorFromRGB(50, 82, 123));
    empty4_box.setBorderSize(2);
    empty4_container.add(empty4_box);

    empty4_text.setPosition(123, 36, 154, 61);
    empty4_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    empty4_text.setLinespacing(0);
    empty4_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NZKK));
    empty4_container.add(empty4_text);

    empty4_title.setXY(10, 108);
    empty4_title.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    empty4_title.setLinespacing(0);
    empty4_title.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R0SJ));
    empty4_container.add(empty4_title);

    add(empty4_container);

    empty5_container.setPosition(0, 336, 400, 144);
    empty5_box.setPosition(0, 0, 400, 144);
    empty5_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    empty5_box.setBorderColor(touchgfx::Color::getColorFromRGB(50, 82, 123));
    empty5_box.setBorderSize(2);
    empty5_container.add(empty5_box);

    empty5_text.setPosition(124, 36, 152, 61);
    empty5_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    empty5_text.setLinespacing(0);
    empty5_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_EAJ9));
    empty5_container.add(empty5_text);

    empty5_title.setXY(11, 108);
    empty5_title.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    empty5_title.setLinespacing(0);
    empty5_title.setTypedText(touchgfx::TypedText(T___SINGLEUSE_80IS));
    empty5_container.add(empty5_title);

    add(empty5_container);

    empty6_container.setPosition(400, 336, 400, 144);
    empty6_box.setPosition(0, 0, 400, 144);
    empty6_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    empty6_box.setBorderColor(touchgfx::Color::getColorFromRGB(50, 82, 123));
    empty6_box.setBorderSize(2);
    empty6_container.add(empty6_box);

    empty6_text.setPosition(124, 36, 152, 61);
    empty6_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    empty6_text.setLinespacing(0);
    empty6_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QVOM));
    empty6_container.add(empty6_text);

    empty6_title.setXY(10, 108);
    empty6_title.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    empty6_title.setLinespacing(0);
    empty6_title.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R2YU));
    empty6_container.add(empty6_title);

    add(empty6_container);
}

UI_page2ViewBase::~UI_page2ViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void UI_page2ViewBase::setupScreen()
{

}

void UI_page2ViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //show_ui_page1
        //When hardware button 0 clicked change screen to UI_page1
        //Go to UI_page1 with no screen transition
        application().gotoUI_page1ScreenNoTransition();
    
    }
}
