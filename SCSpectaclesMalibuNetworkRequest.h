//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesNetworkRequestProvider-Protocol.h"

@class MLBAmbaRequest, NSString;

@interface SCSpectaclesMalibuNetworkRequest : NSObject <SCSpectaclesNetworkRequestProvider>
{
    MLBAmbaRequest *_malibuRequest;
}

+ (int)_mediaTypeFromFileType:(unsigned long long)arg1;
+ (id)analyticsFilesDeleteRequest;
+ (id)analyticsFilesGetWithFilename:(id)arg1 range:(struct _NSRange)arg2;
+ (id)analyticsFilesListRequest;
+ (id)batchReadRequestWithFilename:(id)arg1 range:(struct _NSRange)arg2 chunkSize:(unsigned long long)arg3 allowDataPacket:(_Bool)arg4;
+ (id)crashLogFileListRequest;
+ (id)crashLogFileRequestWithFilename:(id)arg1 range:(struct _NSRange)arg2;
+ (id)deletionRequestForContentNamed:(id)arg1 includeHd:(_Bool)arg2;
+ (id)firmwareWriteRequest:(id)arg1 start:(unsigned long long)arg2;
+ (id)gpsWriteRequest:(id)arg1;
+ (id)lagunaPairingRequestWithAmbaRequest:(id)arg1;
+ (id)markTransferredRequestForContentNamed:(id)arg1 includeHd:(_Bool)arg2;
+ (id)mediaListRequest;
+ (id)readRequestWithFilename:(id)arg1;
+ (id)requestByBatchingRequests:(id)arg1;
+ (id)shareWifiCredentialsRequest;
+ (id)shareWifiCredentialsStatusRequest;
+ (id)startAsNeededDeletionRequest;
+ (id)stereoCalibrationDataRequest;
- (void).cxx_destruct;
- (id)initWithMalibuRequest:(id)arg1;
@property(readonly, nonatomic) MLBAmbaRequest *malibuRequest; // @synthesize malibuRequest=_malibuRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

