/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "SKPALEMappedObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface SKPMediaDocument : NSObject { //SKPALEMappedObject {
	unsigned _status;
	unsigned _docType;
	NSURL* _uri;
	unsigned _uploadProgress;
	unsigned _uploadStatus;
	double _uploadStartTime;
}
@property(assign, nonatomic) double uploadStartTime;
@property(assign, nonatomic) unsigned uploadStatus;
@property(assign, nonatomic) unsigned uploadProgress;
@property(readonly, assign, nonatomic) NSURL* uri;
@property(readonly, assign, nonatomic) unsigned docType;
@property(assign, nonatomic) unsigned status;
+(id)transformValue:(id)value forKeyPath:(id)keyPath wasTransformed:(BOOL*)transformed;
+(id)propertyMapping;
+(Class)associatedALEClass;
//-(void).cxx_destruct;
-(void)reportEventForUploadStatusIfNeeded:(int)uploadStatusIfNeeded;
-(void)reportEventForUploadError:(int)uploadError;
-(void)OnUploadStatusChanged:(id)changed andContentid:(id)contentid andStatus:(int)status;
-(void)OnUploadProgress:(id)progress andContentid:(id)contentid andSizeuploaded:(unsigned)sizeuploaded andTotalsize:(unsigned)totalsize;
-(void)OnUploadError:(id)error andContentid:(id)contentid andError:(int)error3 andIscritical:(BOOL)iscritical;
-(void)OnMediaLinkStatusChange:(id)change andStatus:(int)status andProfile:(id)profile andPath:(id)path;
-(void)OnMediaLinkProgress:(id)progress andProfile:(id)profile andPreparationpercents:(unsigned)preparationpercents andSizedownloaded:(unsigned)sizedownloaded andTotalsize:(unsigned)totalsize;
-(void)OnDownloadError:(id)error andProfile:(id)profile andError:(int)error3 andIscritical:(BOOL)iscritical;
-(void)setSkyLibUploadStatus:(int)status;
-(void)initializeObject;
-(void)initializeALEObjectWithObjectId:(unsigned)objectId;
-(id)otherPropertyKeysToIncludeInDebugDescription;
-(id)localPathOfOriginMedia;
-(void)retryWithForceSync:(BOOL)forceSync;
-(void)sync;
-(BOOL)postInConversation:(id)conversation;

// Skype 5.8.516
@property(retain, nonatomic) NSString* thumbnailPath;
@end

