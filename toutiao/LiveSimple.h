//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTEntityBase.h"

@class NSString;

@interface LiveSimple : TTEntityBase
{
    NSString *_covers;
    long long _simpleId;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(nonatomic) long long simpleId; // @synthesize simpleId=_simpleId;
@property(copy, nonatomic) NSString *covers; // @synthesize covers=_covers;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

