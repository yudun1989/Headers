//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface NSObject (AutoCoding) <NSSecureCoding>
+ (id)codableProperties;
+ (id)objectWithContentsOfFile:(id)arg1;
+ (id)objectWithData:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void)setWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)codableProperties;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@end

