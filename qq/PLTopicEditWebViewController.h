//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

@protocol PLTopicEditWebViewControllerProtocol;

@interface PLTopicEditWebViewController : QQWebViewController
{
    id <PLTopicEditWebViewControllerProtocol> _webMessageDelegate;
}

@property(nonatomic) __weak id <PLTopicEditWebViewControllerProtocol> webMessageDelegate; // @synthesize webMessageDelegate=_webMessageDelegate;
- (void).cxx_destruct;
- (id)jsonFormatWithTopicTextList:(id)arg1;
- (id)fetchTopicTextList:(id)arg1;
- (void)onSetTopicLabelMessage:(id)arg1;
- (void)onCloseMessage:(id)arg1;
- (void)backToPreViewController;
- (id)initWithType:(unsigned long long)arg1 inputTextList:(id)arg2;
- (void)dealloc;

@end

