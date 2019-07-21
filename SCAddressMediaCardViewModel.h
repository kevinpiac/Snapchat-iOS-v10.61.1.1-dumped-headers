//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMediaCardViewModel.h"

#import "SCChatAddressMediaCardViewModel-Protocol.h"

@class NSString;

@interface SCAddressMediaCardViewModel : SCMediaCardViewModel <SCChatAddressMediaCardViewModel>
{
    NSString *_address;
    NSString *_trackingId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (id)defaultThumbnailImage;
- (id)initWithAddressMediaCardContent:(id)arg1 isGrayScale:(_Bool)arg2 shouldActOnGesture:(_Bool)arg3;
- (id)initWithSummary:(id)arg1 isGrayScale:(_Bool)arg2 shouldActOnGesture:(_Bool)arg3;
- (_Bool)isCircularThumbnail;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

