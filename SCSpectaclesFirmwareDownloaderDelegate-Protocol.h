//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCSpectaclesFirmwareDownloader, SCSpectaclesFirmwareVersion;

@protocol SCSpectaclesFirmwareDownloaderDelegate
- (void)firmwareDownloader:(SCSpectaclesFirmwareDownloader *)arg1 didDownloadPatchToPath:(NSString *)arg2;
- (void)firmwareDownloader:(SCSpectaclesFirmwareDownloader *)arg1 didFailMetadataFetch:(long long)arg2;
- (void)firmwareDownloader:(SCSpectaclesFirmwareDownloader *)arg1 didFetchTargetDigest:(NSString *)arg2 targetVersion:(SCSpectaclesFirmwareVersion *)arg3 intermediateDigest:(NSString *)arg4 intermediateVersion:(SCSpectaclesFirmwareVersion *)arg5;
- (void)firmwareDownloaderDidFailPatchDownload:(SCSpectaclesFirmwareDownloader *)arg1;
@end
