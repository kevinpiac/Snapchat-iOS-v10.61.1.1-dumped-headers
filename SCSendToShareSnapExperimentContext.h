//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToShareSnapExperimentContext : SCExperimentContext
{
    _Bool _enableOnPreview;
    _Bool _enableOnSendToTopBar;
    _Bool _enableOnSendToMultiButton;
}

@property(readonly, nonatomic) _Bool enableOnPreview; // @synthesize enableOnPreview=_enableOnPreview;
@property(readonly, nonatomic) _Bool enableOnSendToMultiButton; // @synthesize enableOnSendToMultiButton=_enableOnSendToMultiButton;
@property(readonly, nonatomic) _Bool enableOnSendToTopBar; // @synthesize enableOnSendToTopBar=_enableOnSendToTopBar;
- (id)experimentName;
- (void)setupParameters;

@end

