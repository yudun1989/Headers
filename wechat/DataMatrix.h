//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DataMatrix : NSObject
{
    int dim;
    _Bool **data;
}

- (void)dealloc;
- (id)toString;
- (_Bool)valueAt:(int)arg1 y:(int)arg2;
- (void)set:(_Bool)arg1 x:(int)arg2 y:(int)arg3;
- (int)dimension;
- (id)initWith:(int)arg1;

@end

