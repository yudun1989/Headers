//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

@protocol TBStoryWebViewControllerDelegate;

@interface TBStoryWebViewController : QQWebViewController
{
    id <TBStoryWebViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <TBStoryWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)leftButtonClick:(id)arg1;

@end

