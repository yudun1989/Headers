//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQGroupNoticeCenterPageDot, QQGroupNoticeCenterPageView, UIScrollView;

@interface QQGroupNoticeCenterPageControl : UIView <UIScrollViewDelegate>
{
    UIScrollView *_contentView;
    QQGroupNoticeCenterPageDot *_ntPageDot;
    NSMutableArray *_aryContentView;
    QQGroupNoticeCenterPageView *lastGroupNoticeCenterPageViewPage;
}

- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

