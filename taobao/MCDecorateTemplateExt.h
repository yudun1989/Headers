//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray;

@interface MCDecorateTemplateExt : NSObject <NSCoding>
{
    NSArray *_windowInfo;
}

@property(retain, nonatomic) NSArray *windowInfo; // @synthesize windowInfo=_windowInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

