//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "TTUGCAttributedLabel-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSString, TTUGCAttributedLabelLink, UIColor, UILongPressGestureRecognizer;
@protocol TTUGCAttributedLabelDelegate;

@interface TTUGCAttributedLabel : UILabel <TTUGCAttributedLabel, UIGestureRecognizerDelegate>
{
    _Bool _needsFramesetter;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    _Bool _extendsLinkTouchArea;
    NSAttributedString *_attributedText;
    id <TTUGCAttributedLabelDelegate> _delegate;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    NSDictionary *_inactiveLinkAttributes;
    double _shadowRadius;
    double _highlightedShadowRadius;
    UIColor *_highlightedShadowColor;
    double _kern;
    double _firstLineIndent;
    double _lineSpacing;
    double _minimumLineHeight;
    double _maximumLineHeight;
    double _lineHeightMultiple;
    long long _verticalAlignment;
    NSAttributedString *_attributedTruncationToken;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSAttributedString *_inactiveAttributedText;
    NSAttributedString *_renderedAttributedText;
    NSArray *_linkModels;
    TTUGCAttributedLabelLink *_activeLink;
    struct CGSize _highlightedShadowOffset;
    struct _NSRange _truncatedTokenRange;
    struct UIEdgeInsets _linkBackgroundEdgeInset;
    struct UIEdgeInsets _textInsets;
    struct CGRect _truncatedTokenRect;
}

+ (long long)numberOfLinesAttributedString:(id)arg1 withConstraints:(double)arg2;
+ (struct CGSize)sizeThatFitsAttributedString:(id)arg1 withConstraints:(struct CGSize)arg2 limitedToNumberOfLines:(unsigned long long)arg3;
@property(nonatomic) struct CGRect truncatedTokenRect; // @synthesize truncatedTokenRect=_truncatedTokenRect;
@property(nonatomic) struct _NSRange truncatedTokenRange; // @synthesize truncatedTokenRange=_truncatedTokenRange;
@property(retain, nonatomic) TTUGCAttributedLabelLink *activeLink; // @synthesize activeLink=_activeLink;
@property(retain, nonatomic) NSArray *linkModels; // @synthesize linkModels=_linkModels;
@property(copy, nonatomic) NSAttributedString *renderedAttributedText; // @synthesize renderedAttributedText=_renderedAttributedText;
@property(copy, nonatomic) NSAttributedString *inactiveAttributedText; // @synthesize inactiveAttributedText=_inactiveAttributedText;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSAttributedString *attributedTruncationToken; // @synthesize attributedTruncationToken=_attributedTruncationToken;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) double maximumLineHeight; // @synthesize maximumLineHeight=_maximumLineHeight;
@property(nonatomic) double minimumLineHeight; // @synthesize minimumLineHeight=_minimumLineHeight;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property(nonatomic) double kern; // @synthesize kern=_kern;
@property(retain, nonatomic) UIColor *highlightedShadowColor; // @synthesize highlightedShadowColor=_highlightedShadowColor;
@property(nonatomic) struct CGSize highlightedShadowOffset; // @synthesize highlightedShadowOffset=_highlightedShadowOffset;
@property(nonatomic) double highlightedShadowRadius; // @synthesize highlightedShadowRadius=_highlightedShadowRadius;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) _Bool extendsLinkTouchArea; // @synthesize extendsLinkTouchArea=_extendsLinkTouchArea;
@property(nonatomic) struct UIEdgeInsets linkBackgroundEdgeInset; // @synthesize linkBackgroundEdgeInset=_linkBackgroundEdgeInset;
@property(retain, nonatomic) NSDictionary *inactiveLinkAttributes; // @synthesize inactiveLinkAttributes=_inactiveLinkAttributes;
@property(retain, nonatomic) NSDictionary *activeLinkAttributes; // @synthesize activeLinkAttributes=_activeLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(nonatomic) id <TTUGCAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (void)longPressGestureDidFire:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)setText:(id)arg1 afterInheritingLabelAttributesAndConfiguringWithBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id text; // @dynamic text;
- (void)drawAttachments:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawFramesetter:(struct __CTFramesetter *)arg1 attributedString:(id)arg2 textRange:(CDStruct_912cb5d2)arg3 inRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)linkAtCharacterIndex:(long long)arg1;
- (id)linkAtRadius:(double)arg1 aroundPoint:(struct CGPoint)arg2;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (_Bool)containsLinkAtPoint:(struct CGPoint)arg1;
- (id)addLinkToURL:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkWithTextCheckingResult:(id)arg1;
- (id)addLinksWithTextCheckingResults:(id)arg1 attributes:(id)arg2;
- (id)addLinkWithTextCheckingResult:(id)arg1 attributes:(id)arg2;
- (void)addLinks:(id)arg1;
- (void)addLink:(id)arg1;
- (void)setHighlightFramesetter:(struct __CTFramesetter *)arg1;
- (struct __CTFramesetter *)highlightFramesetter;
- (void)setFramesetter:(struct __CTFramesetter *)arg1;
- (struct __CTFramesetter *)framesetter;
- (void)setNeedsFramesetter;
@property(readonly, nonatomic) NSArray *links;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

