//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface qVRRfUFZIyWiYLyv : NSObject
{
    id _obj;
    void *_pointer;
    Class _cls;
    id _weakObj;
    id _assignObj;
}

+ (id)boxAssignObj:(id)arg1;
+ (id)boxWeakObj:(id)arg1;
+ (id)boxClass:(Class)arg1;
+ (id)boxPointer:(void *)arg1;
+ (id)boxObj:(id)arg1;
@property(nonatomic) id assignObj; // @synthesize assignObj=_assignObj;
@property(nonatomic) __weak id weakObj; // @synthesize weakObj=_weakObj;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
@property(nonatomic) void *pointer; // @synthesize pointer=_pointer;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
- (void).cxx_destruct;
- (Class)unboxClass;
- (void *)unboxPointer;
- (id)unbox;

@end

