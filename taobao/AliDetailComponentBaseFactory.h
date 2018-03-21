//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliDetailFactoryProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface AliDetailComponentBaseFactory : NSObject <AliDetailFactoryProtocol>
{
    NSString *_filePath;
    NSDictionary *_mapDic;
}

@property(retain, nonatomic) NSDictionary *mapDic; // @synthesize mapDic=_mapDic;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)getBundle;
- (void)setComponentMapDic:(id)arg1;
- (id)componentMapDic;
- (Class)makeClass:(id)arg1;
- (id)make:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

