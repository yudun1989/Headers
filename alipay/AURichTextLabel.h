//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSString, UIColor, UIFont;
@protocol AURichTextLabelDelegate;

@interface AURichTextLabel : UIView
{
    _Bool _highlighted;
    int _textAlignment;
    int _lineBreakMode;
    int _currentSelectedButtonComponentIndex;
    NSString *_text;
    NSString *_plainText;
    NSString *_highlightedText;
    UIColor *_textColor;
    UIFont *_font;
    NSDictionary *_linkAttributes;
    NSDictionary *_selectedLinkAttributes;
    id <AURichTextLabelDelegate> _delegate;
    NSString *_paragraphReplacement;
    NSMutableArray *_textComponents;
    NSMutableArray *_highlightedTextComponents;
    double _lineSpacing;
    struct CGSize _optimumSize;
    struct {
        long long location;
        long long length;
    } _visibleRange;
}

+ (id)preExtractTextStyle:(id)arg1;
+ (id)extractTextStyleFromText:(id)arg1 paragraphReplacement:(id)arg2;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) CDStruct_912cb5d2 visibleRange; // @synthesize visibleRange=_visibleRange;
@property(nonatomic) int currentSelectedButtonComponentIndex; // @synthesize currentSelectedButtonComponentIndex=_currentSelectedButtonComponentIndex;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) int lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) struct CGSize optimumSize; // @synthesize optimumSize=_optimumSize;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSMutableArray *highlightedTextComponents; // @synthesize highlightedTextComponents=_highlightedTextComponents;
@property(retain, nonatomic) NSMutableArray *textComponents; // @synthesize textComponents=_textComponents;
@property(copy, nonatomic) NSString *paragraphReplacement; // @synthesize paragraphReplacement=_paragraphReplacement;
@property(nonatomic) __weak id <AURichTextLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *selectedLinkAttributes; // @synthesize selectedLinkAttributes=_selectedLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *highlightedText; // @synthesize highlightedText=_highlightedText;
@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)setCustomString:(id)arg1;
- (long long)getCustomFontSize:(long long)arg1;
- (void)setText:(id)arg1 extractedTextStyle:(id)arg2;
- (id)visibleText;
- (id)colorForHex:(id)arg1;
- (void)parse:(id)arg1 valid_tags:(id)arg2;
- (id)components;
- (void)dealloc;
- (double)frameHeight:(struct __CTFrame *)arg1;
- (void)setHighlightedText:(id)arg1 extractedTextComponent:(id)arg2;
- (void)setText:(id)arg1 extractedTextComponent:(id)arg2;
- (void)resetTextPosition:(id)arg1;
- (void)onButtonPressed:(id)arg1;
- (void)onButtonTouchUpOutside:(id)arg1;
- (void)onButtonTouchDown:(id)arg1;
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyBoldItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applyDoubleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applySingleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applyCenterStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)render:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

