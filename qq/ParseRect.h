//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ParseRect : NSObject
{
    double x;
    double y;
    double w;
    double h;
    int line;
}

+ (id)rectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4 line:(double)arg5;
@property int line; // @synthesize line;
@property double h; // @synthesize h;
@property double w; // @synthesize w;
@property double y; // @synthesize y;
@property double x; // @synthesize x;
- (struct CGRect)toCGRect;

@end

