//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCSearchSolosModerationSubmissionHelper : NSObject
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (id)initWithRequestManager:(id)arg1;
- (void)nominateWithSnapId:(id)arg1 curatorName:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)submitWithSnapId:(id)arg1 curatorName:(id)arg2 audienceValues:(id)arg3 categoryValues:(id)arg4 otherCategory:(id)arg5 rating:(id)arg6 source:(id)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;

@end
