//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface VZItem : NSObject <NSCoding, NSCopying>
{
    int _encodeType;
}

+ (id)propertyNamesInternal:(Class)arg1;
+ (id)properties:(Class)arg1;
+ (id)propertyNames;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)description;
- (id)toDictionary;
- (void)autoMapTo:(id)arg1;
- (void)autoKVCBinding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

