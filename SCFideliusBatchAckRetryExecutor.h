//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFideliusBatchExecutor.h"

@interface SCFideliusBatchAckRetryExecutor : SCFideliusBatchExecutor
{
}

- (id)_endpoint;
- (void)_onRequestMade;
- (_Bool)_shouldDedup:(id)arg1;
- (id)_toSubmitToJson:(id)arg1;
- (const char *)queueLabel;

@end

