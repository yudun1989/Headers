//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface KSPortalPath : NSObject <NSCopying>
{
    NSArray *_pathComponents;
}

@property(retain, nonatomic) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
- (void).cxx_destruct;
- (id)matchWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;
- (id)componetsForPath:(id)arg1;

@end

