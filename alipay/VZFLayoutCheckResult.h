//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VZFLayoutCheckResult : NSObject
{
    _Bool _hasOutOfBoundsChildren;
    _Bool _selfCanBeRasterized;
    _Bool _childrenCannotBeRasterized;
}

@property(nonatomic) _Bool childrenCannotBeRasterized; // @synthesize childrenCannotBeRasterized=_childrenCannotBeRasterized;
@property(nonatomic) _Bool selfCanBeRasterized; // @synthesize selfCanBeRasterized=_selfCanBeRasterized;
@property(nonatomic) _Bool hasOutOfBoundsChildren; // @synthesize hasOutOfBoundsChildren=_hasOutOfBoundsChildren;

@end

