//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMapInlineReplyExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _screenshotIsAttachedByDefault;
}

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)experimentName;
@property(readonly, nonatomic) _Bool screenshotIsAttachedByDefault; // @synthesize screenshotIsAttachedByDefault=_screenshotIsAttachedByDefault;
- (void)setupParameters;

@end

