//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseComponent.h"

@class M80AttributedLabel, UIButton;

@interface TBRDStructuredTextComponent : TBCBaseComponent
{
    UIButton *_btnExpand;
    M80AttributedLabel *_lbRich;
}

+ (id)defaultFields;
+ (id)defaultStyle;
+ (id)componentTag;
@property(retain, nonatomic) M80AttributedLabel *lbRich; // @synthesize lbRich=_lbRich;
@property(retain, nonatomic) UIButton *btnExpand; // @synthesize btnExpand=_btnExpand;
- (void).cxx_destruct;
- (id)createTagLableWithText:(id)arg1 textColor:(id)arg2 borderColor:(id)arg3 font:(id)arg4;
- (void)btnExpandAction:(id)arg1;
- (void)loadContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

