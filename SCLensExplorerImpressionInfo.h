//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensExplorerImpressionInfoValue.h"

#import "SCImpressionInfo-Protocol.h"

@class NSString;

@interface SCLensExplorerImpressionInfo : SCLensExplorerImpressionInfoValue <SCImpressionInfo>
{
}

- (id)updateWithDate:(id)arg1 viewDuration:(double)arg2;
- (id)withItemPosition:(unsigned int)arg1;
- (id)withLastUpdateDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

