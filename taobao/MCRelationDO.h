//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MCRelationDO : NSObject <NSCopying>
{
    NSString *_ccode;
    long long _relationType;
}

@property(readonly, nonatomic) long long relationType; // @synthesize relationType=_relationType;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

