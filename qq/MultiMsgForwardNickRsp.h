//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MultiMsgForwardNickRsp : NSObject
{
    BOOL _cNickCut;
    unsigned int _dwNextUin;
    NSMutableDictionary *_nickDic;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(nonatomic) BOOL cNickCut; // @dynamic cNickCut;
@property(nonatomic) unsigned int dwNextUin; // @dynamic dwNextUin;
@property(retain, nonatomic) NSMutableDictionary *nickDic; // @dynamic nickDic;

@end

