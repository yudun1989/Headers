//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PMBaseMessage.h"

@class NSString;

@interface PMBaseRequestMsg : PMBaseMessage
{
    long long _index;
    long long _pageSize;
    long long _role;
    NSString *_bizTag;
}

@property(retain, nonatomic) NSString *bizTag; // @synthesize bizTag=_bizTag;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (long long)fromProtocolItem:(id)arg1;
- (id)toProtocolItem;

@end

