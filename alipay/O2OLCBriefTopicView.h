//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface O2OLCBriefTopicView : UIView
{
    NSString *_title;
    UILabel *_textLabel;
    CDUnknownBlockType _menuAction;
}

+ (struct CGSize)sizeWithText:(id)arg1 constrainedSize:(struct CGSize)arg2;
@property(copy, nonatomic) CDUnknownBlockType menuAction; // @synthesize menuAction=_menuAction;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)menuPressed:(id)arg1;
- (void)showPopMenu:(id)arg1 action:(CDUnknownBlockType)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

