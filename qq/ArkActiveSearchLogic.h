//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ArkActiveSearchControl, NSMutableArray, QQBaseChatViewController, UIScrollView;

@interface ArkActiveSearchLogic : NSObject
{
    QQBaseChatViewController *_baseChatViewController;
    UIScrollView *_bubbleBar;
    NSMutableArray *_bubbleQueue;
    ArkActiveSearchControl *_showingBubble;
}

- (void).cxx_destruct;
- (void)caculateFooterView;
- (void)doLayoutBubble;
- (void)onBubbleClickNotify:(id)arg1;
- (void)closeBubble:(id)arg1;
- (void)removeBubbleFromQueue:(id)arg1;
- (void)closeBubble;
- (void)showBubble;
- (void)showBubbleQuick;
- (id)createBubble;
- (struct CGRect)getBubbleBarRect;
- (void)checkBubbleBarHidden;
- (_Bool)checkBubbleBar;
- (_Bool)validType;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

