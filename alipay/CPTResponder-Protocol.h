//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol CPTResponder <NSObject>
- (_Bool)pointingDeviceCancelledEvent:(struct UIEvent *)arg1;
- (_Bool)pointingDeviceDraggedEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
@end

