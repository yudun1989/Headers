//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol MCDecorateComponent;

@protocol MCDecorateComponentEventDelegate <NSObject>
- (void)decorateComponent:(id <MCDecorateComponent>)arg1 contentEnableChange:(_Bool)arg2;
- (void)decorateComponent:(id <MCDecorateComponent>)arg1 contentTopChange:(double)arg2;
- (void)decorateComponentContentChange:(id <MCDecorateComponent>)arg1;
- (void)decorateComponentDidLoad:(id <MCDecorateComponent>)arg1;

@optional
- (void)decorateComponent:(id <MCDecorateComponent>)arg1 hideKeyboard:(NSDictionary *)arg2;
@end

