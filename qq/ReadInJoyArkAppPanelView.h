//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ReadInJoyChannelArticle;

@interface ReadInJoyArkAppPanelView : UIView
{
    ReadInJoyChannelArticle *_feedsModel;
}

@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)dealloc;
- (void)needRemoveFromTableView;
- (void)showToast:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)resizeCellView:(struct CGSize)arg1;
- (void)renderArkView;

@end

