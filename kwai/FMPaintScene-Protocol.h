//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet;

@protocol FMPaintScene <NSObject>
- (void)managePaintSetRgb:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)managePaintClear;
- (void)managePaintUndo;
- (void)manageTouches:(NSSet *)arg1 movedPoint:(struct CGPoint)arg2;
@end

