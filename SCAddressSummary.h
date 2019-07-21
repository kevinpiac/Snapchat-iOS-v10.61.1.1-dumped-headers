//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSummary.h"

@class NSString;

@interface SCAddressSummary : SCSummary
{
    NSString *_address;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (id)cacheId;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)failedToLoad;
- (void)fetchThumbnailImageFromServerWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 userSession:(id)arg3;
- (id)initWithAddress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidSummary;
- (long long)mediaMetadataAvailable;
- (id)trackingId;

@end

