//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ReadInJoyChannelArticle, UIButton;

@interface ReadInJoyTopicTagView : UIView
{
    ReadInJoyChannelArticle *_feedsModel;
    UIButton *_tagButton;
}

@property(retain, nonatomic) UIButton *tagButton; // @synthesize tagButton=_tagButton;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void).cxx_destruct;
- (void)onEntranceClick:(id)arg1;
- (void)layoutSubviewsExt;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end

