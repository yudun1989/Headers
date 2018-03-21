//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NIAttributedLabel, NSString, UILabel;
@protocol NIAttributedLabelDelegate;

@interface TCQRCodeCardInfoContainer : UIView
{
    UILabel *_labelTitle;
    NIAttributedLabel *_labelUrl;
    NSString *_url;
    NSString *_title;
    id <NIAttributedLabelDelegate> _delegate;
    int _xo;
}

- (void)dealloc;
- (void)layoutSubviews;
@property(nonatomic) id <NIAttributedLabelDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) NSString *url; // @dynamic url;
- (id)initWithInfo:(id)arg1 url:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

