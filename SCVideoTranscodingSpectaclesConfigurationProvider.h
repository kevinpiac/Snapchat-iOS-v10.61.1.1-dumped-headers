//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCVideoTranscodingBaseConfigurationProvider.h"

@interface SCVideoTranscodingSpectaclesConfigurationProvider : SCVideoTranscodingBaseConfigurationProvider
{
}

- (long long)_targetBitrateForSpectaclesVideoWithTargetFileSize:(long long)arg1;
- (double)bitrateForSaving;
- (double)bitrateForSending;
- (struct CGSize)targetSizeForSaving;
- (struct CGSize)targetSizeForSending;

@end

