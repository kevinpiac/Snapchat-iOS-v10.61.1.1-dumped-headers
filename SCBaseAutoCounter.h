//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SCBaseAutoMeasureEvent;

@interface SCBaseAutoCounter : NSObject
{
    SCBaseAutoMeasureEvent *_measure;
    NSDictionary *_params;
}

+ (void)incrementForMeasure:(id)arg1;
+ (void)incrementForMeasure:(id)arg1 params:(id)arg2;
+ (void)incrementForMeasure:(id)arg1 params:(id)arg2 amount:(unsigned long long)arg3;
- (void).cxx_destruct;
- (void)increment:(unsigned long long)arg1;
- (id)initWithMeasure:(id)arg1;
- (id)initWithMeasure:(id)arg1 params:(id)arg2;

@end
