//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCLegacyCameraServices : NSObject
{
    SCLazy *_tooltipState;
    SCLazy *_activeVideoPaths;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *activeVideoPaths; // @synthesize activeVideoPaths=_activeVideoPaths;
- (id)initWithTooltipState:(id)arg1 activeVideoPaths:(id)arg2;
@property(readonly, nonatomic) SCLazy *tooltipState; // @synthesize tooltipState=_tooltipState;

@end

