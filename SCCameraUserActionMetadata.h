//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCCameraUserActionMetadata : NSObject
{
    double _touchStartTimestamp;
    struct CGPoint _touchStartLocation;
}

- (id)initWithTouchStartLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint touchStartLocation; // @synthesize touchStartLocation=_touchStartLocation;
@property(readonly, nonatomic) double touchStartTimestamp; // @synthesize touchStartTimestamp=_touchStartTimestamp;

@end

