//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseResp.h"

@class NSString;

@interface WXSubscribeMsgResp : BaseResp
{
    unsigned int _scene;
    NSString *_templateId;
    NSString *_action;
    NSString *_reserved;
    NSString *_openId;
}

@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *reserved; // @synthesize reserved=_reserved;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (void)dealloc;

@end

