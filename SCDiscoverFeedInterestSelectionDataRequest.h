//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedInterestSelectionDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_interestExpansionRequest_categoryId;
    NSString *_interestSelectionRequest_categoryId;
    double _interestSelectionRequest_lastSelectedTimeStamp;
    long long _fetchRequest_feedType;
}

+ (id)fetchRequestWithFeedType:(long long)arg1;
+ (id)interestExpansionRequestWithCategoryId:(id)arg1;
+ (id)interestSelectionRequestWithCategoryId:(id)arg1 lastSelectedTimeStamp:(double)arg2;
+ (id)resetSubmissionStateRequest;
+ (id)submissionRequest;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchInterestExpansionRequest:(CDUnknownBlockType)arg1 interestSelectionRequest:(CDUnknownBlockType)arg2 fetchRequest:(CDUnknownBlockType)arg3 submissionRequest:(CDUnknownBlockType)arg4 resetSubmissionStateRequest:(CDUnknownBlockType)arg5;

@end

