//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIColor, UIViewController, YWConversation, YWIMCore, YWPerson;

@protocol IYWAVChatService <NSObject>
@property(nonatomic) _Bool disableMiniScreen;
@property(retain, nonatomic) UIColor *stopButtonBackgroundColor;
@property(retain, nonatomic) UIColor *acceptButtonBackgroundColor;
@property(nonatomic) _Bool noFullScreenInCall;
@property(nonatomic) _Bool disableBeauty;
@property(nonatomic) double initialBeauty;
- (void)handleNewMessages:(NSArray *)arg1 withIMCore:(YWIMCore *)arg2;
- (void)startAudioChat:(NSString *)arg1 withPresentingViewController:(UIViewController *)arg2 conversation:(YWConversation *)arg3 receiver:(YWPerson *)arg4 withNick:(NSString *)arg5 avatar:(NSString *)arg6 title:(NSString *)arg7 introducation:(NSString *)arg8 extParams:(NSDictionary *)arg9 withIMCore:(YWIMCore *)arg10;
- (void)startVideoChat:(NSString *)arg1 withPresentingViewController:(UIViewController *)arg2 conversation:(YWConversation *)arg3 receiver:(YWPerson *)arg4 withNick:(NSString *)arg5 avatar:(NSString *)arg6 title:(NSString *)arg7 introducation:(NSString *)arg8 extParams:(NSDictionary *)arg9 withIMCore:(YWIMCore *)arg10;
- (void)loadWithVendorKey:(NSString *)arg1;
@end

