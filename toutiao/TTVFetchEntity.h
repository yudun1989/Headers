//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTVFetchEntity : NSObject
{
    _Bool _full;
    _Bool _notifyError;
    long long _index;
    long long _priority;
    NSString *_itemID;
    NSString *_uniqueID;
    long long _aggrType;
}

@property(nonatomic) long long aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool notifyError; // @synthesize notifyError=_notifyError;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool full; // @synthesize full=_full;
- (void).cxx_destruct;

@end

