//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTPresenceDraggingContext : NSObject
{
    struct CGPoint _startLocation;
    struct CGPoint _lastLocation;
}

- (id)initWithStartLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic) double normalizedStretch;
@property(readonly, nonatomic) double stretch;
- (void)updateLocation:(struct CGPoint)arg1;

@end

