//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface TBLiveLandscapeShareView : UIView
{
    NSMutableArray *_items;
    UIView *_backview;
}

@property(retain, nonatomic) UIView *backview; // @synthesize backview=_backview;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)show;
- (void)dismiss;
- (void)click:(id)arg1;
- (void)tap:(id)arg1;
- (void)addShareIcon:(id)arg1 orIconText:(id)arg2 display:(id)arg3 keyname:(id)arg4 url:(id)arg5 handle:(CDUnknownBlockType)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end

