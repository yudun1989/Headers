//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSMutableArray, NSMutableAttributedString, NSTextCheckingResult, UIColor;
@protocol SLAttributedLabelDelegate;

@interface SLAttributedLabel : UILabel
{
    NSMutableAttributedString *_attributedTextWithLinks;
    struct __CTFrame *_textFrame;
    struct CGRect _drawingRect;
    NSMutableArray *_customLinks;
    NSTextCheckingResult *_activeLink;
    struct CGPoint _touchStartPoint;
    _Bool _underlineLinks;
    _Bool _centerVertically;
    _Bool _onlyCatchTouchesOnLinks;
    _Bool _extendBottomToFit;
    _Bool _isUseCustomLink;
    _Bool _isNeedBufferForLink;
    NSMutableArray *_images;
    NSMutableAttributedString *_attributedText;
    id <SLAttributedLabelDelegate> _delegate;
    UIColor *_linkColor;
    UIColor *_highlightedLinkColor;
    unsigned long long _automaticallyAddLinksForType;
    double _lineSpacing;
}

@property(nonatomic) _Bool isNeedBufferForLink; // @synthesize isNeedBufferForLink=_isNeedBufferForLink;
@property(nonatomic) _Bool isUseCustomLink; // @synthesize isUseCustomLink=_isUseCustomLink;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) _Bool extendBottomToFit; // @synthesize extendBottomToFit=_extendBottomToFit;
@property(nonatomic) _Bool onlyCatchTouchesOnLinks; // @synthesize onlyCatchTouchesOnLinks=_onlyCatchTouchesOnLinks;
@property(nonatomic) unsigned long long automaticallyAddLinksForType; // @synthesize automaticallyAddLinksForType=_automaticallyAddLinksForType;
@property(nonatomic) _Bool centerVertically; // @synthesize centerVertically=_centerVertically;
@property(nonatomic) _Bool underlineLinks; // @synthesize underlineLinks=_underlineLinks;
@property(retain, nonatomic) UIColor *highlightedLinkColor; // @synthesize highlightedLinkColor=_highlightedLinkColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(nonatomic) id <SLAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
- (void)hideImagesTextFlagInString:(id)arg1 withImages:(id)arg2;
- (void)attachImagesWithFrame:(struct __CTFrame *)arg1 withImages:(id)arg2 withContext:(struct CGContext *)arg3;
- (void)setAttString:(id)arg1 withImages:(id)arg2;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)linkAtCharacterIndex:(long long)arg1;
- (id)attributedTextWithLinks;
- (void)resetTextFrame;
- (void)handleTapGesture:(id)arg1;
- (void)initSelf;
- (void)setNeedsDisplay;
- (void)setLineBreakMode:(long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
@property(copy, nonatomic) NSMutableAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)removeAllCustomLinks;
- (void)addCustomLink:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)resetAttributedText;
- (void)drawActiveLinkHighlightForRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)getBufferForLabelText;
- (void)dealloc;
- (void)setBufferForLink:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

