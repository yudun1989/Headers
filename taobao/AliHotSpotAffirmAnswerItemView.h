//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface AliHotSpotAffirmAnswerItemView : UIView
{
    NSString *_answerText;
    long long _index;
    UILabel *_answerLabel;
    CDUnknownBlockType _answerItemView;
    _Bool _isSelected;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchAnswerItemView:(CDUnknownBlockType)arg1;
- (void)setAnswerText:(id)arg1 index:(long long)arg2;
- (long long)getIndex;
- (id)getAnswerText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

