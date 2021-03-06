//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPDataUpdate.h"

@class NSArray, NSString;

@interface AMPAddGroupUserUpdate : AMPDataUpdate
{
    NSArray *_listId;
    NSString *_cCode;
    unsigned long long _identity;
}

@property(nonatomic) unsigned long long identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *cCode; // @synthesize cCode=_cCode;
@property(retain, nonatomic) NSArray *listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
- (id)parseMtopData:(id)arg1;
- (id)generatePacket;
- (void)dbUpdateAfterNet:(id)arg1;
- (void)memoryUpdateAfterNet:(id)arg1;
- (id)initWithList:(id)arg1 cCode:(id)arg2 identity:(unsigned long long)arg3;

@end

