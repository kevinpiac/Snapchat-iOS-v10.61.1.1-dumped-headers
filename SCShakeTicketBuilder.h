//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SCShakeTicketBuilder : NSObject
{
    _Bool _mIsAutoTicket;
    _Bool _mShouldCreateJiraTicket;
    _Bool _mWithScreenshot;
    _Bool _mWithAttachments;
    _Bool _mHasScreenCaptured;
    _Bool _mHasVideoAttached;
    _Bool _mHasCameraRollAttachment;
    NSString *_mId;
    long long _mReportType;
    NSString *_mDescription;
    NSString *_mFeature;
    NSString *_mSubFeature;
    NSArray *_mNotificationEmails;
    NSNumber *_mNetworkBandwidth;
    long long _mNetworkConnectionType;
    long long _mShakeSensitivityType;
    NSNumber *_mCreateTimeStamp;
    NSString *_mViewControllerName;
    NSString *_mViewControllerFeature;
    NSString *_mJiraMetaInfo;
    NSArray *_mCameraRollAttachmentsFileNames;
    NSString *_mReportSource;
    NSString *_mOtherInfo;
    NSArray *_mJiraLabels;
}

- (void).cxx_destruct;
- (id)build;
@property(copy, nonatomic) NSArray *mCameraRollAttachmentsFileNames; // @synthesize mCameraRollAttachmentsFileNames=_mCameraRollAttachmentsFileNames;
@property(retain, nonatomic) NSNumber *mCreateTimeStamp; // @synthesize mCreateTimeStamp=_mCreateTimeStamp;
@property(copy, nonatomic) NSString *mDescription; // @synthesize mDescription=_mDescription;
@property(copy, nonatomic) NSString *mFeature; // @synthesize mFeature=_mFeature;
@property(nonatomic) _Bool mHasCameraRollAttachment; // @synthesize mHasCameraRollAttachment=_mHasCameraRollAttachment;
@property(nonatomic) _Bool mHasScreenCaptured; // @synthesize mHasScreenCaptured=_mHasScreenCaptured;
@property(nonatomic) _Bool mHasVideoAttached; // @synthesize mHasVideoAttached=_mHasVideoAttached;
@property(copy, nonatomic) NSString *mId; // @synthesize mId=_mId;
@property(nonatomic) _Bool mIsAutoTicket; // @synthesize mIsAutoTicket=_mIsAutoTicket;
@property(copy, nonatomic) NSArray *mJiraLabels; // @synthesize mJiraLabels=_mJiraLabels;
@property(copy, nonatomic) NSString *mJiraMetaInfo; // @synthesize mJiraMetaInfo=_mJiraMetaInfo;
@property(retain, nonatomic) NSNumber *mNetworkBandwidth; // @synthesize mNetworkBandwidth=_mNetworkBandwidth;
@property(nonatomic) long long mNetworkConnectionType; // @synthesize mNetworkConnectionType=_mNetworkConnectionType;
@property(copy, nonatomic) NSArray *mNotificationEmails; // @synthesize mNotificationEmails=_mNotificationEmails;
@property(retain, nonatomic) NSString *mOtherInfo; // @synthesize mOtherInfo=_mOtherInfo;
@property(retain, nonatomic) NSString *mReportSource; // @synthesize mReportSource=_mReportSource;
@property(nonatomic) long long mReportType; // @synthesize mReportType=_mReportType;
@property(nonatomic) long long mShakeSensitivityType; // @synthesize mShakeSensitivityType=_mShakeSensitivityType;
@property(nonatomic) _Bool mShouldCreateJiraTicket; // @synthesize mShouldCreateJiraTicket=_mShouldCreateJiraTicket;
@property(copy, nonatomic) NSString *mSubFeature; // @synthesize mSubFeature=_mSubFeature;
@property(copy, nonatomic) NSString *mViewControllerFeature; // @synthesize mViewControllerFeature=_mViewControllerFeature;
@property(copy, nonatomic) NSString *mViewControllerName; // @synthesize mViewControllerName=_mViewControllerName;
@property(nonatomic) _Bool mWithAttachments; // @synthesize mWithAttachments=_mWithAttachments;
@property(nonatomic) _Bool mWithScreenshot; // @synthesize mWithScreenshot=_mWithScreenshot;

@end

