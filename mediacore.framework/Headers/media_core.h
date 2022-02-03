#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ATRoomStreamContext, Media_coreKermitCommonLogger, ATStreamNotificationsManager, Media_coreCybertronUser, Media_corePrimusStream, Media_coreKoin_coreKoin, Media_coreMediaRepositoryCompanion, Media_coreKotlinx_serialization_jsonJson, Media_coreMediaAuthJwtDecoder, Media_coreMediaAuthJwtDecoderJwt, Media_coreKoin_coreModule, Media_coreKotlinUnit, Media_coreKotlinThrowable, Media_coreKermitSeverity, Media_coreKermitLogger, Media_coreCybertronPresence, Media_coreCybertronUserCompanion, Media_coreKoin_coreScope, Media_coreKoin_coreParametersHolder, Media_coreKotlinLazyThreadSafetyMode, Media_coreKoin_coreLogger, Media_coreKoin_coreInstanceRegistry, Media_coreKoin_corePropertyRegistry, Media_coreKoin_coreScopeRegistry, Media_coreKotlinx_serialization_coreSerializersModule, Media_coreKotlinx_serialization_jsonJsonConfiguration, Media_coreKotlinx_serialization_jsonJsonDefault, Media_coreKotlinx_serialization_jsonJsonElement, Media_coreKoin_coreInstanceFactory<T>, Media_coreKotlinPair<__covariant A, __covariant B>, Media_coreKoin_coreScopeDSL, Media_coreKoin_coreSingleInstanceFactory<T>, Media_coreKotlinArray<T>, Media_coreKotlinException, Media_coreKotlinRuntimeException, Media_coreKotlinIllegalStateException, Media_coreKotlinEnumCompanion, Media_coreKotlinEnum<E>, Media_coreCybertronRoom, Media_coreCybertronPresenceCompanion, Media_coreKoin_coreParametersHolderCompanion, Media_coreKoin_coreLevel, Media_coreKoin_coreScopeRegistryCompanion, Media_coreKotlinx_serialization_jsonJsonElementCompanion, Media_coreKoin_coreBeanDefinition<T>, Media_coreKoin_coreInstanceFactoryCompanion, Media_coreKoin_coreInstanceContext, Media_coreCybertronVisibility, Media_coreCybertronAccessibility, Media_coreCybertronState, Media_coreCybertronMembershipRole, Media_coreCybertronMembershipState, Media_coreKotlinx_datetimeInstant, Media_coreCybertronCall, Media_coreCybertronPermissions, Media_coreCybertronRoomCompanion, Media_coreKotlinNothing, Media_coreKotlinx_serialization_coreSerialKind, Media_coreKoin_coreKind, Media_coreKoin_coreCallbacks<T>, Media_coreCybertronMembershipRoleCompanion, Media_coreCybertronMembershipStateCompanion, Media_coreKotlinx_datetimeInstantCompanion, Media_coreCybertronCallCompanion, Media_coreCybertronPermissionState, Media_coreCybertronPermissionsCompanion, Media_coreCybertronPermissionStateCompanion;

@protocol Media_coreKotlinx_coroutines_coreMutableStateFlow, Media_coreKotlinx_coroutines_coreStateFlow, Media_coreKoin_coreKoinComponent, Media_coreKotlinx_coroutines_coreFlowCollector, Media_coreKotlinx_coroutines_coreFlow, Media_coreKotlinx_coroutines_coreSharedFlow, Media_coreKotlinx_coroutines_coreMutableSharedFlow, Media_coreKermitThrowableStringProvider, Media_coreKoin_coreKoinScopeComponent, Media_coreKoin_coreQualifier, Media_coreKotlinKClass, Media_coreKotlinLazy, Media_coreKotlinx_serialization_coreDeserializationStrategy, Media_coreKotlinx_serialization_coreSerializationStrategy, Media_coreKotlinx_serialization_coreSerialFormat, Media_coreKotlinx_serialization_coreStringFormat, Media_coreKotlinComparable, Media_coreKotlinx_serialization_coreKSerializer, Media_coreKoin_coreScopeCallback, Media_coreKotlinKDeclarationContainer, Media_coreKotlinKAnnotatedElement, Media_coreKotlinKClassifier, Media_coreKotlinx_serialization_coreDecoder, Media_coreKotlinx_serialization_coreSerialDescriptor, Media_coreKotlinx_serialization_coreEncoder, Media_coreKotlinx_serialization_coreSerializersModuleCollector, Media_coreKotlinIterator, Media_coreKotlinx_serialization_coreCompositeDecoder, Media_coreKotlinAnnotation, Media_coreKotlinx_serialization_coreCompositeEncoder;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Media_coreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Media_coreBase (Media_coreBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Media_coreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Media_coreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMedia_coreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Media_coreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface Media_coreByte : Media_coreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Media_coreUByte : Media_coreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Media_coreShort : Media_coreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Media_coreUShort : Media_coreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Media_coreInt : Media_coreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Media_coreUInt : Media_coreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Media_coreLong : Media_coreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Media_coreULong : Media_coreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Media_coreFloat : Media_coreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Media_coreDouble : Media_coreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Media_coreBoolean : Media_coreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AirtimeMedia")))
@interface Media_coreAirtimeMedia : Media_coreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doInitUserId:(NSString *)userId __attribute__((swift_name("doInit(userId:)")));
- (void)muteStreamAudioPublisherId:(NSString *)publisherId __attribute__((swift_name("muteStreamAudio(publisherId:)")));
- (void)muteStreamVideoPublisherId:(NSString *)publisherId __attribute__((swift_name("muteStreamVideo(publisherId:)")));
- (void)observeStreamsRoomId:(NSString *)roomId __attribute__((swift_name("observeStreams(roomId:)")));
- (void)publishRoomId:(NSString *)roomId publishAudio:(BOOL)publishAudio publishVideo:(BOOL)publishVideo __attribute__((swift_name("publish(roomId:publishAudio:publishVideo:)")));
- (void)setConserveDataModeEnabledEnabled:(BOOL)enabled __attribute__((swift_name("setConserveDataModeEnabled(enabled:)")));
- (void)setSuperAvatar __attribute__((swift_name("setSuperAvatar()")));
- (void)stopObservingStreamsRoomId:(NSString *)roomId __attribute__((swift_name("stopObservingStreams(roomId:)")));
- (void)unPublishRoomId:(NSString *)roomId __attribute__((swift_name("unPublish(roomId:)")));
- (void)unmuteStreamAudioPublisherId:(NSString *)publisherId __attribute__((swift_name("unmuteStreamAudio(publisherId:)")));
- (void)unmuteStreamVideoPublisherId:(NSString *)publisherId __attribute__((swift_name("unmuteStreamVideo(publisherId:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreMutableStateFlow> _publishState __attribute__((swift_name("_publishState")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreMutableStateFlow> _publishStream __attribute__((swift_name("_publishStream")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreMutableStateFlow> _streams __attribute__((swift_name("_streams")));
@property ATRoomStreamContext * _Nullable atRoomStreamContext __attribute__((swift_name("atRoomStreamContext")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> audioDeviceChangedFlow __attribute__((swift_name("audioDeviceChangedFlow")));
@property (readonly) Media_coreKermitCommonLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> publishState __attribute__((swift_name("publishState")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> publishStream __attribute__((swift_name("publishStream")));
@property ATStreamNotificationsManager *streamNotifier __attribute__((swift_name("streamNotifier")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> streams __attribute__((swift_name("streams")));
@property NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioDeviceChangedEvent")))
@interface Media_coreAudioDeviceChangedEvent : Media_coreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("PrimusStream")))
@interface Media_corePrimusStream : Media_coreBase
- (instancetype)initWithUser:(Media_coreCybertronUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> isAudioMuted __attribute__((swift_name("isAudioMuted")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> isVideoMuted __attribute__((swift_name("isVideoMuted")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> isVoiceActive __attribute__((swift_name("isVoiceActive")));
@property (readonly) Media_coreCybertronUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimusPublishStream")))
@interface Media_corePrimusPublishStream : Media_corePrimusStream
- (instancetype)initWithUser:(Media_coreCybertronUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimusSubscriptionStream")))
@interface Media_corePrimusSubscriptionStream : Media_corePrimusStream
- (instancetype)initWithUser:(Media_coreCybertronUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol Media_coreKoin_coreKoinComponent
@required
- (Media_coreKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaRepository")))
@interface Media_coreMediaRepository : Media_coreBase <Media_coreKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) Media_coreMediaRepositoryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> bixbyAllocation __attribute__((swift_name("bixbyAllocation")));
@property (readonly) int32_t currentPixelsLimit __attribute__((swift_name("currentPixelsLimit")));
@property (readonly) Media_coreKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@property (readonly) int32_t maxStreamDegradedVideoThreshold __attribute__((swift_name("maxStreamDegradedVideoThreshold")));
@property (readonly) int32_t publishBitrateLimit __attribute__((swift_name("publishBitrateLimit")));
@property (readonly) int32_t publishFrameRateLimit __attribute__((swift_name("publishFrameRateLimit")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> publishState __attribute__((swift_name("publishState")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> publishStream __attribute__((swift_name("publishStream")));
@property (readonly) int64_t rtcEventLogDuration __attribute__((swift_name("rtcEventLogDuration")));
@property (readonly) BOOL streamDebugEnabled __attribute__((swift_name("streamDebugEnabled")));
@property (readonly) int32_t streamMaxRetries __attribute__((swift_name("streamMaxRetries")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> streamTokens __attribute__((swift_name("streamTokens")));
@property (readonly) int32_t subscribeBitrateLimit __attribute__((swift_name("subscribeBitrateLimit")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> subscriptionStreams __attribute__((swift_name("subscriptionStreams")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaRepository.Companion")))
@interface Media_coreMediaRepositoryCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreMediaRepositoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BITRATE_LIMIT_NONE __attribute__((swift_name("BITRATE_LIMIT_NONE")));
@property (readonly) NSString *DEFAULT_BIXBY_HOST __attribute__((swift_name("DEFAULT_BIXBY_HOST")));
@property (readonly) NSString *LIST_STREAMS_OPERATION __attribute__((swift_name("LIST_STREAMS_OPERATION")));
@property (readonly) int32_t PUBLISH_BITRATE_LIMIT_CONSERVE_DATA __attribute__((swift_name("PUBLISH_BITRATE_LIMIT_CONSERVE_DATA")));
@property (readonly) int32_t PUBLISH_FRAMERATE __attribute__((swift_name("PUBLISH_FRAMERATE")));
@property (readonly) int32_t PUBLISH_PIXELS_INITIAL __attribute__((swift_name("PUBLISH_PIXELS_INITIAL")));
@property (readonly) int32_t PUBLISH_PIXELS_LIMIT __attribute__((swift_name("PUBLISH_PIXELS_LIMIT")));
@property (readonly) int32_t PUBLISH_PIXELS_LIMIT_CONSERVE_DATA __attribute__((swift_name("PUBLISH_PIXELS_LIMIT_CONSERVE_DATA")));
@property (readonly) int32_t PUBLISH_STREAM_DEGRADED_VIDEO_THRESHOLD __attribute__((swift_name("PUBLISH_STREAM_DEGRADED_VIDEO_THRESHOLD")));
@property (readonly) int32_t STREAM_MAX_RETRIES __attribute__((swift_name("STREAM_MAX_RETRIES")));
@property (readonly) int32_t SUBSCRIBE_BITRATE_LIMIT_CONSERVE_DATA __attribute__((swift_name("SUBSCRIBE_BITRATE_LIMIT_CONSERVE_DATA")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAuthJwtDecoder")))
@interface Media_coreMediaAuthJwtDecoder : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mediaAuthJwtDecoder __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreMediaAuthJwtDecoder *shared __attribute__((swift_name("shared")));
- (Media_coreMediaAuthJwtDecoderJwt * _Nullable)parseToken:(NSString * _Nullable)token __attribute__((swift_name("parse(token:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAuthJwtDecoder.Jwt")))
@interface Media_coreMediaAuthJwtDecoderJwt : Media_coreBase
- (instancetype)initWithHeader:(NSString *)header body:(NSString *)body __attribute__((swift_name("init(header:body:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaModuleKt")))
@interface Media_coreMediaModuleKt : Media_coreBase
+ (Media_coreKoin_coreModule *)mediaModule __attribute__((swift_name("mediaModule()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol Media_coreKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<Media_coreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(Media_coreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol Media_coreKotlinx_coroutines_coreSharedFlow <Media_coreKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol Media_coreKotlinx_coroutines_coreStateFlow <Media_coreKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol Media_coreKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(Media_coreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol Media_coreKotlinx_coroutines_coreMutableSharedFlow <Media_coreKotlinx_coroutines_coreSharedFlow, Media_coreKotlinx_coroutines_coreFlowCollector>
@required
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<Media_coreKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol Media_coreKotlinx_coroutines_coreMutableStateFlow <Media_coreKotlinx_coroutines_coreStateFlow, Media_coreKotlinx_coroutines_coreMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end;

__attribute__((swift_name("KermitLogger")))
@interface Media_coreKermitLogger : Media_coreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dMessage:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("d(message:tag:throwable:)")));
- (void)eMessage:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("e(message:tag:throwable:)")));
- (void)iMessage:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("i(message:tag:throwable:)")));
- (BOOL)isLoggableSeverity:(Media_coreKermitSeverity *)severity __attribute__((swift_name("isLoggable(severity:)")));
- (void)logSeverity:(Media_coreKermitSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
- (void)vMessage:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("v(message:tag:throwable:)")));
- (void)wMessage:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("w(message:tag:throwable:)")));
- (void)wtfMessage:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("wtf(message:tag:throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitCommonLogger")))
@interface Media_coreKermitCommonLogger : Media_coreKermitLogger
- (instancetype)initWithThrowableStringProvider:(id<Media_coreKermitThrowableStringProvider>)throwableStringProvider __attribute__((swift_name("init(throwableStringProvider:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)logSeverity:(Media_coreKermitSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(Media_coreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronUser")))
@interface Media_coreCybertronUser : Media_coreBase
- (instancetype)initWithId:(NSString *)id bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(Media_coreBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(Media_coreLong * _Nullable)followerCount followingCount:(Media_coreLong * _Nullable)followingCount mutualFollowingCount:(Media_coreLong * _Nullable)mutualFollowingCount twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername tags:(NSArray<NSString *> *)tags presence:(Media_coreCybertronPresence * _Nullable)presence __attribute__((swift_name("init(id:bio:firstName:lastName:username:verified:avatarUrl:followerCount:followingCount:mutualFollowingCount:twitterUrl:twitterUsername:instagramUrl:instagramUsername:tags:presence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreCybertronUserCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Media_coreLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<NSString *> *)component15 __attribute__((swift_name("component15()")));
- (Media_coreCybertronPresence * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (Media_coreBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (Media_coreLong * _Nullable)component8 __attribute__((swift_name("component8()")));
- (Media_coreLong * _Nullable)component9 __attribute__((swift_name("component9()")));
- (Media_coreCybertronUser *)doCopyId:(NSString *)id bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(Media_coreBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(Media_coreLong * _Nullable)followerCount followingCount:(Media_coreLong * _Nullable)followingCount mutualFollowingCount:(Media_coreLong * _Nullable)mutualFollowingCount twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername tags:(NSArray<NSString *> *)tags presence:(Media_coreCybertronPresence * _Nullable)presence __attribute__((swift_name("doCopy(id:bio:firstName:lastName:username:verified:avatarUrl:followerCount:followingCount:mutualFollowingCount:twitterUrl:twitterUsername:instagramUrl:instagramUsername:tags:presence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) Media_coreLong * _Nullable followerCount __attribute__((swift_name("followerCount")));
@property (readonly) Media_coreLong * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable instagramUrl __attribute__((swift_name("instagramUrl")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) Media_coreLong * _Nullable mutualFollowingCount __attribute__((swift_name("mutualFollowingCount")));
@property (readonly) Media_coreCybertronPresence * _Nullable presence __attribute__((swift_name("presence")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable twitterUrl __attribute__((swift_name("twitterUrl")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@property (readonly) Media_coreBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface Media_coreKoin_coreKoin : Media_coreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (Media_coreKoin_coreScope *)createScopeT:(id<Media_coreKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (Media_coreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (Media_coreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (Media_coreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<Media_coreKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<Media_coreKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<Media_coreKotlinKClass>)clazz qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (Media_coreKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (Media_coreKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<Media_coreKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<Media_coreKotlinKClass>)clazz qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (Media_coreKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (Media_coreKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<Media_coreKotlinLazy>)injectQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier mode:(Media_coreKotlinLazyThreadSafetyMode *)mode parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<Media_coreKotlinLazy>)injectOrNullQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier mode:(Media_coreKotlinLazyThreadSafetyMode *)mode parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<Media_coreKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(Media_coreKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<Media_coreKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) Media_coreKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) Media_coreKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) Media_coreKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) Media_coreKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol Media_coreKotlinx_serialization_coreSerialFormat
@required
@property (readonly) Media_coreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol Media_coreKotlinx_serialization_coreStringFormat <Media_coreKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<Media_coreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface Media_coreKotlinx_serialization_jsonJson : Media_coreBase <Media_coreKotlinx_serialization_coreStringFormat>
- (instancetype)initWithConfiguration:(Media_coreKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(Media_coreKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(Media_coreKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (Media_coreKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<Media_coreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<Media_coreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (Media_coreKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) Media_coreKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) Media_coreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface Media_coreKoin_coreModule : Media_coreBase
- (instancetype)initWithCreatedAtStart:(BOOL)createdAtStart __attribute__((swift_name("init(createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (Media_coreKotlinPair<Media_coreKoin_coreModule *, Media_coreKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSArray<Media_coreKoin_coreModule *> *)plusModules:(NSArray<Media_coreKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<Media_coreKoin_coreModule *> *)plusModule:(Media_coreKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<Media_coreKoin_coreQualifier>)qualifier scopeSet:(void (^)(Media_coreKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(Media_coreKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (Media_coreKotlinPair<Media_coreKoin_coreModule *, Media_coreKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) BOOL createdAtStart __attribute__((swift_name("createdAtStart")));
@property (readonly) Media_coreMutableSet<Media_coreKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Media_coreKotlinThrowable : Media_coreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Media_coreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Media_coreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface Media_coreKotlinException : Media_coreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface Media_coreKotlinRuntimeException : Media_coreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Media_coreKotlinIllegalStateException : Media_coreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface Media_coreKotlinCancellationException : Media_coreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Media_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface Media_coreKotlinUnit : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Media_coreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Media_coreKotlinEnum<E> : Media_coreBase <Media_coreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitSeverity")))
@interface Media_coreKermitSeverity : Media_coreKotlinEnum<Media_coreKermitSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Media_coreKermitSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) Media_coreKermitSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) Media_coreKermitSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) Media_coreKermitSeverity *warn __attribute__((swift_name("warn")));
@property (class, readonly) Media_coreKermitSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) Media_coreKermitSeverity *assert __attribute__((swift_name("assert")));
+ (Media_coreKotlinArray<Media_coreKermitSeverity *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KermitThrowableStringProvider")))
@protocol Media_coreKermitThrowableStringProvider
@required
- (NSString *)getThrowableStringThrowable:(Media_coreKotlinThrowable *)throwable __attribute__((swift_name("getThrowableString(throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronPresence")))
@interface Media_coreCybertronPresence : Media_coreBase
- (instancetype)initWithConnectedTime:(NSString * _Nullable)connectedTime disconnectedTime:(NSString * _Nullable)disconnectedTime presenceStatus:(NSString * _Nullable)presenceStatus rooms:(NSArray<Media_coreCybertronRoom *> * _Nullable)rooms __attribute__((swift_name("init(connectedTime:disconnectedTime:presenceStatus:rooms:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreCybertronPresenceCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<Media_coreCybertronRoom *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (Media_coreCybertronPresence *)doCopyConnectedTime:(NSString * _Nullable)connectedTime disconnectedTime:(NSString * _Nullable)disconnectedTime presenceStatus:(NSString * _Nullable)presenceStatus rooms:(NSArray<Media_coreCybertronRoom *> * _Nullable)rooms __attribute__((swift_name("doCopy(connectedTime:disconnectedTime:presenceStatus:rooms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isOnline __attribute__((swift_name("isOnline()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable connectedTime __attribute__((swift_name("connectedTime")));
@property (readonly) NSString * _Nullable disconnectedTime __attribute__((swift_name("disconnectedTime")));
@property (readonly) NSString * _Nullable presenceStatus __attribute__((swift_name("presenceStatus")));
@property (readonly) NSArray<Media_coreCybertronRoom *> * _Nullable rooms __attribute__((swift_name("rooms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronUser.Companion")))
@interface Media_coreCybertronUserCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronUserCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface Media_coreKoin_coreScope : Media_coreBase
- (instancetype)initWithScopeQualifier:(id<Media_coreKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(Media_coreKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<Media_coreKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (Media_coreKoin_coreScope *)doCopyScopeQualifier:(id<Media_coreKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(Media_coreKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<Media_coreKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<Media_coreKotlinKClass>)clazz qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<Media_coreKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (Media_coreKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<Media_coreKotlinKClass>)clazz qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (NSString *)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (NSString *)getPropertyKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (NSString * _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (Media_coreKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<Media_coreKotlinLazy>)injectQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier mode:(Media_coreKotlinLazyThreadSafetyMode *)mode parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<Media_coreKotlinLazy>)injectOrNullQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier mode:(Media_coreKotlinLazyThreadSafetyMode *)mode parameters:(Media_coreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(Media_coreKotlinArray<Media_coreKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<Media_coreKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(Media_coreKotlinArray<Media_coreKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<Media_coreKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) Media_coreKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<Media_coreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol Media_coreKoin_coreKoinScopeComponent <Media_coreKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) Media_coreKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol Media_coreKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Media_coreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Media_coreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Media_coreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Media_coreKotlinKClass <Media_coreKotlinKDeclarationContainer, Media_coreKotlinKAnnotatedElement, Media_coreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface Media_coreKoin_coreParametersHolder : Media_coreBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (Media_coreKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<Media_coreKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<Media_coreKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (Media_coreKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol Media_coreKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface Media_coreKotlinLazyThreadSafetyMode : Media_coreKotlinEnum<Media_coreKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Media_coreKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) Media_coreKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) Media_coreKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (Media_coreKotlinArray<Media_coreKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface Media_coreKoin_coreLogger : Media_coreBase
- (instancetype)initWithLevel:(Media_coreKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(Media_coreKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(Media_coreKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(Media_coreKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property Media_coreKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface Media_coreKoin_coreInstanceRegistry : Media_coreBase
- (instancetype)initWith_koin:(Media_coreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(Media_coreKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) Media_coreKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, Media_coreKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface Media_coreKoin_corePropertyRegistry : Media_coreBase
- (instancetype)initWith_koin:(Media_coreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface Media_coreKoin_coreScopeRegistry : Media_coreBase
- (instancetype)initWith_koin:(Media_coreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSArray<Media_coreKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) Media_coreKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<Media_coreKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol Media_coreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Media_coreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<Media_coreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol Media_coreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<Media_coreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<Media_coreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface Media_coreKotlinx_serialization_coreSerializersModule : Media_coreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<Media_coreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<Media_coreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<Media_coreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<Media_coreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<Media_coreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Media_coreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<Media_coreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Media_coreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface Media_coreKotlinx_serialization_jsonJsonConfiguration : Media_coreBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface Media_coreKotlinx_serialization_jsonJsonDefault : Media_coreKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfiguration:(Media_coreKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(Media_coreKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface Media_coreKotlinx_serialization_jsonJsonElement : Media_coreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) Media_coreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface Media_coreKoin_coreInstanceFactory<T> : Media_coreBase
- (instancetype)initWithBeanDefinition:(Media_coreKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(Media_coreKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(Media_coreKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(Media_coreKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(Media_coreKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) Media_coreKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface Media_coreKotlinPair<__covariant A, __covariant B> : Media_coreBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (Media_coreKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface Media_coreKoin_coreScopeDSL : Media_coreBase
- (instancetype)initWithScopeQualifier:(id<Media_coreKoin_coreQualifier>)scopeQualifier module:(Media_coreKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (Media_coreKotlinPair<Media_coreKoin_coreModule *, Media_coreKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (Media_coreKotlinPair<Media_coreKoin_coreModule *, Media_coreKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (Media_coreKotlinPair<Media_coreKoin_coreModule *, Media_coreKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) Media_coreKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<Media_coreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface Media_coreKoin_coreSingleInstanceFactory<T> : Media_coreKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(Media_coreKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(Media_coreKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(Media_coreKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(Media_coreKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(Media_coreKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Media_coreKotlinArray<T> : Media_coreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Media_coreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Media_coreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Media_coreKotlinEnumCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronRoom")))
@interface Media_coreCybertronRoom : Media_coreBase
- (instancetype)initWithId:(NSString *)id owner:(Media_coreCybertronUser * _Nullable)owner title:(NSString * _Nullable)title topic:(NSString * _Nullable)topic color:(NSString * _Nullable)color tags:(NSArray<NSString *> *)tags visibility:(Media_coreCybertronVisibility * _Nullable)visibility accessibility:(Media_coreCybertronAccessibility * _Nullable)accessibility live:(BOOL)live defaultNewMembersToSpectator:(BOOL)defaultNewMembersToSpectator allowGoLiveRoomRequests:(BOOL)allowGoLiveRoomRequests notificationMuteDuration:(Media_coreLong * _Nullable)notificationMuteDuration unseen:(BOOL)unseen memberCount:(Media_coreInt * _Nullable)memberCount spectatorCount:(Media_coreInt * _Nullable)spectatorCount invitedCount:(int32_t)invitedCount accessToken:(NSString * _Nullable)accessToken favorite:(BOOL)favorite feature:(BOOL)feature visited:(BOOL)visited state:(Media_coreCybertronState * _Nullable)state membershipRole:(Media_coreCybertronMembershipRole * _Nullable)membershipRole membershipState:(Media_coreCybertronMembershipState * _Nullable)membershipState imageUrl:(NSString * _Nullable)imageUrl optimizedUrl:(NSString * _Nullable)optimizedUrl colors:(NSArray<NSString *> *)colors featuredUsers:(NSArray<NSString *> *)featuredUsers featuredUsersAvatarUrls:(NSArray<NSString *> *)featuredUsersAvatarUrls featuredNames:(NSArray<NSString *> *)featuredNames featuredInviteeNames:(NSArray<NSString *> *)featuredInviteeNames featuredInvitees:(NSArray<NSString *> *)featuredInvitees featured:(NSArray<Media_coreCybertronUser *> *)featured avatar:(NSString * _Nullable)avatar presence:(NSArray<Media_coreCybertronUser *> *)presence createdAt:(Media_coreKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)updatedAt inviteCreatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)inviteCreatedAt inviteUpdatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)inviteUpdatedAt lastCallAt:(Media_coreKotlinx_datetimeInstant * _Nullable)lastCallAt lastActivityAt:(Media_coreKotlinx_datetimeInstant * _Nullable)lastActivityAt lastMessageAt:(Media_coreKotlinx_datetimeInstant * _Nullable)lastMessageAt call:(Media_coreCybertronCall * _Nullable)call permissions:(Media_coreCybertronPermissions * _Nullable)permissions __attribute__((swift_name("init(id:owner:title:topic:color:tags:visibility:accessibility:live:defaultNewMembersToSpectator:allowGoLiveRoomRequests:notificationMuteDuration:unseen:memberCount:spectatorCount:invitedCount:accessToken:favorite:feature:visited:state:membershipRole:membershipState:imageUrl:optimizedUrl:colors:featuredUsers:featuredUsersAvatarUrls:featuredNames:featuredInviteeNames:featuredInvitees:featured:avatar:presence:createdAt:updatedAt:inviteCreatedAt:inviteUpdatedAt:lastCallAt:lastActivityAt:lastMessageAt:call:permissions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreCybertronRoomCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (Media_coreLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (Media_coreInt * _Nullable)component14 __attribute__((swift_name("component14()")));
- (Media_coreInt * _Nullable)component15 __attribute__((swift_name("component15()")));
- (int32_t)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (BOOL)component19 __attribute__((swift_name("component19()")));
- (Media_coreCybertronUser * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component20 __attribute__((swift_name("component20()")));
- (Media_coreCybertronState * _Nullable)component21 __attribute__((swift_name("component21()")));
- (Media_coreCybertronMembershipRole * _Nullable)component22 __attribute__((swift_name("component22()")));
- (Media_coreCybertronMembershipState * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSArray<NSString *> *)component26 __attribute__((swift_name("component26()")));
- (NSArray<NSString *> *)component27 __attribute__((swift_name("component27()")));
- (NSArray<NSString *> *)component28 __attribute__((swift_name("component28()")));
- (NSArray<NSString *> *)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component30 __attribute__((swift_name("component30()")));
- (NSArray<NSString *> *)component31 __attribute__((swift_name("component31()")));
- (NSArray<Media_coreCybertronUser *> *)component32 __attribute__((swift_name("component32()")));
- (NSString * _Nullable)component33 __attribute__((swift_name("component33()")));
- (NSArray<Media_coreCybertronUser *> *)component34 __attribute__((swift_name("component34()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component35 __attribute__((swift_name("component35()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component36 __attribute__((swift_name("component36()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component37 __attribute__((swift_name("component37()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component38 __attribute__((swift_name("component38()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component40 __attribute__((swift_name("component40()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component41 __attribute__((swift_name("component41()")));
- (Media_coreCybertronCall * _Nullable)component42 __attribute__((swift_name("component42()")));
- (Media_coreCybertronPermissions * _Nullable)component43 __attribute__((swift_name("component43()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> *)component6 __attribute__((swift_name("component6()")));
- (Media_coreCybertronVisibility * _Nullable)component7 __attribute__((swift_name("component7()")));
- (Media_coreCybertronAccessibility * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (Media_coreCybertronRoom *)doCopyId:(NSString *)id owner:(Media_coreCybertronUser * _Nullable)owner title:(NSString * _Nullable)title topic:(NSString * _Nullable)topic color:(NSString * _Nullable)color tags:(NSArray<NSString *> *)tags visibility:(Media_coreCybertronVisibility * _Nullable)visibility accessibility:(Media_coreCybertronAccessibility * _Nullable)accessibility live:(BOOL)live defaultNewMembersToSpectator:(BOOL)defaultNewMembersToSpectator allowGoLiveRoomRequests:(BOOL)allowGoLiveRoomRequests notificationMuteDuration:(Media_coreLong * _Nullable)notificationMuteDuration unseen:(BOOL)unseen memberCount:(Media_coreInt * _Nullable)memberCount spectatorCount:(Media_coreInt * _Nullable)spectatorCount invitedCount:(int32_t)invitedCount accessToken:(NSString * _Nullable)accessToken favorite:(BOOL)favorite feature:(BOOL)feature visited:(BOOL)visited state:(Media_coreCybertronState * _Nullable)state membershipRole:(Media_coreCybertronMembershipRole * _Nullable)membershipRole membershipState:(Media_coreCybertronMembershipState * _Nullable)membershipState imageUrl:(NSString * _Nullable)imageUrl optimizedUrl:(NSString * _Nullable)optimizedUrl colors:(NSArray<NSString *> *)colors featuredUsers:(NSArray<NSString *> *)featuredUsers featuredUsersAvatarUrls:(NSArray<NSString *> *)featuredUsersAvatarUrls featuredNames:(NSArray<NSString *> *)featuredNames featuredInviteeNames:(NSArray<NSString *> *)featuredInviteeNames featuredInvitees:(NSArray<NSString *> *)featuredInvitees featured:(NSArray<Media_coreCybertronUser *> *)featured avatar:(NSString * _Nullable)avatar presence:(NSArray<Media_coreCybertronUser *> *)presence createdAt:(Media_coreKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)updatedAt inviteCreatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)inviteCreatedAt inviteUpdatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)inviteUpdatedAt lastCallAt:(Media_coreKotlinx_datetimeInstant * _Nullable)lastCallAt lastActivityAt:(Media_coreKotlinx_datetimeInstant * _Nullable)lastActivityAt lastMessageAt:(Media_coreKotlinx_datetimeInstant * _Nullable)lastMessageAt call:(Media_coreCybertronCall * _Nullable)call permissions:(Media_coreCybertronPermissions * _Nullable)permissions __attribute__((swift_name("doCopy(id:owner:title:topic:color:tags:visibility:accessibility:live:defaultNewMembersToSpectator:allowGoLiveRoomRequests:notificationMuteDuration:unseen:memberCount:spectatorCount:invitedCount:accessToken:favorite:feature:visited:state:membershipRole:membershipState:imageUrl:optimizedUrl:colors:featuredUsers:featuredUsersAvatarUrls:featuredNames:featuredInviteeNames:featuredInvitees:featured:avatar:presence:createdAt:updatedAt:inviteCreatedAt:inviteUpdatedAt:lastCallAt:lastActivityAt:lastMessageAt:call:permissions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property (readonly) Media_coreCybertronAccessibility * _Nullable accessibility __attribute__((swift_name("accessibility")));
@property (readonly) BOOL allowGoLiveRoomRequests __attribute__((swift_name("allowGoLiveRoomRequests")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) Media_coreCybertronCall * _Nullable call __attribute__((swift_name("call")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) NSArray<NSString *> *colors __attribute__((swift_name("colors")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) BOOL defaultNewMembersToSpectator __attribute__((swift_name("defaultNewMembersToSpectator")));
@property (readonly) BOOL favorite __attribute__((swift_name("favorite")));
@property (readonly) BOOL feature __attribute__((swift_name("feature")));
@property (readonly) NSArray<Media_coreCybertronUser *> *featured __attribute__((swift_name("featured")));
@property (readonly) NSArray<NSString *> *featuredInviteeNames __attribute__((swift_name("featuredInviteeNames")));
@property (readonly) NSArray<NSString *> *featuredInvitees __attribute__((swift_name("featuredInvitees")));
@property (readonly) NSArray<NSString *> *featuredNames __attribute__((swift_name("featuredNames")));
@property (readonly) NSArray<NSString *> *featuredUsers __attribute__((swift_name("featuredUsers")));
@property (readonly) NSArray<NSString *> *featuredUsersAvatarUrls __attribute__((swift_name("featuredUsersAvatarUrls")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable inviteCreatedAt __attribute__((swift_name("inviteCreatedAt")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable inviteUpdatedAt __attribute__((swift_name("inviteUpdatedAt")));
@property (readonly) int32_t invitedCount __attribute__((swift_name("invitedCount")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable lastActivityAt __attribute__((swift_name("lastActivityAt")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable lastCallAt __attribute__((swift_name("lastCallAt")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable lastMessageAt __attribute__((swift_name("lastMessageAt")));
@property (readonly) BOOL live __attribute__((swift_name("live")));
@property (readonly) Media_coreInt * _Nullable memberCount __attribute__((swift_name("memberCount")));
@property (readonly) Media_coreCybertronMembershipRole * _Nullable membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) Media_coreCybertronMembershipState * _Nullable membershipState __attribute__((swift_name("membershipState")));
@property (readonly) Media_coreLong * _Nullable notificationMuteDuration __attribute__((swift_name("notificationMuteDuration")));
@property (readonly) NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));
@property (readonly) Media_coreCybertronUser * _Nullable owner __attribute__((swift_name("owner")));
@property (readonly) Media_coreCybertronPermissions * _Nullable permissions __attribute__((swift_name("permissions")));
@property (readonly) NSArray<Media_coreCybertronUser *> *presence __attribute__((swift_name("presence")));
@property (readonly) Media_coreInt * _Nullable spectatorCount __attribute__((swift_name("spectatorCount")));
@property (readonly) Media_coreCybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable topic __attribute__((swift_name("topic")));
@property (readonly) BOOL unseen __attribute__((swift_name("unseen")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) Media_coreCybertronVisibility * _Nullable visibility __attribute__((swift_name("visibility")));
@property (readonly) BOOL visited __attribute__((swift_name("visited")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronPresence.Companion")))
@interface Media_coreCybertronPresenceCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronPresenceCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol Media_coreKotlinx_serialization_coreKSerializer <Media_coreKotlinx_serialization_coreSerializationStrategy, Media_coreKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol Media_coreKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(Media_coreKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface Media_coreKoin_coreParametersHolderCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface Media_coreKoin_coreLevel : Media_coreKotlinEnum<Media_coreKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Media_coreKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) Media_coreKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) Media_coreKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) Media_coreKoin_coreLevel *none __attribute__((swift_name("none")));
+ (Media_coreKotlinArray<Media_coreKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface Media_coreKoin_coreScopeRegistryCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol Media_coreKotlinx_serialization_coreDecoder
@required
- (id<Media_coreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<Media_coreKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Media_coreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) Media_coreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol Media_coreKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<Media_coreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Media_coreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<Media_coreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Media_coreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol Media_coreKotlinx_serialization_coreEncoder
@required
- (id<Media_coreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<Media_coreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<Media_coreKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Media_coreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Media_coreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) Media_coreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol Media_coreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<Media_coreKotlinKClass>)kClass provider:(id<Media_coreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<Media_coreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<Media_coreKotlinKClass>)kClass serializer:(id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Media_coreKotlinKClass>)baseClass actualClass:(id<Media_coreKotlinKClass>)actualClass actualSerializer:(id<Media_coreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<Media_coreKotlinKClass>)baseClass defaultSerializerProvider:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface Media_coreKotlinx_serialization_jsonJsonElementCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface Media_coreKoin_coreBeanDefinition<T> : Media_coreBase
- (instancetype)initWithScopeQualifier:(id<Media_coreKoin_coreQualifier>)scopeQualifier primaryType:(id<Media_coreKotlinKClass>)primaryType qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))definition kind:(Media_coreKoin_coreKind *)kind secondaryTypes:(NSArray<id<Media_coreKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<Media_coreKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<Media_coreKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<Media_coreKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()")));
- (Media_coreKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<Media_coreKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (Media_coreKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<Media_coreKoin_coreQualifier>)scopeQualifier primaryType:(id<Media_coreKotlinKClass>)primaryType qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *))definition kind:(Media_coreKoin_coreKind *)kind secondaryTypes:(NSArray<id<Media_coreKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<Media_coreKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<Media_coreKotlinKClass>)clazz qualifier:(id<Media_coreKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<Media_coreKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property Media_coreKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(Media_coreKoin_coreScope *, Media_coreKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) Media_coreKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<Media_coreKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) id<Media_coreKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<Media_coreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<Media_coreKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface Media_coreKoin_coreInstanceFactoryCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface Media_coreKoin_coreInstanceContext : Media_coreBase
- (instancetype)initWithKoin:(Media_coreKoin_coreKoin *)koin scope:(Media_coreKoin_coreScope *)scope parameters:(Media_coreKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) Media_coreKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) Media_coreKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) Media_coreKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Media_coreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronVisibility")))
@interface Media_coreCybertronVisibility : Media_coreKotlinEnum<Media_coreCybertronVisibility *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Media_coreCybertronVisibility *secret __attribute__((swift_name("secret")));
@property (class, readonly) Media_coreCybertronVisibility *friends __attribute__((swift_name("friends")));
@property (class, readonly) Media_coreCybertronVisibility *friendsOfFriends __attribute__((swift_name("friendsOfFriends")));
@property (class, readonly) Media_coreCybertronVisibility *mutualBasic __attribute__((swift_name("mutualBasic")));
@property (class, readonly) Media_coreCybertronVisibility *everyone __attribute__((swift_name("everyone")));
+ (Media_coreKotlinArray<Media_coreCybertronVisibility *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronAccessibility")))
@interface Media_coreCybertronAccessibility : Media_coreKotlinEnum<Media_coreCybertronAccessibility *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Media_coreCybertronAccessibility *inviteOnly __attribute__((swift_name("inviteOnly")));
@property (class, readonly) Media_coreCybertronAccessibility *request __attribute__((swift_name("request")));
@property (class, readonly) Media_coreCybertronAccessibility *mutualBasic __attribute__((swift_name("mutualBasic")));
@property (class, readonly) Media_coreCybertronAccessibility *open __attribute__((swift_name("open")));
+ (Media_coreKotlinArray<Media_coreCybertronAccessibility *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronState")))
@interface Media_coreCybertronState : Media_coreKotlinEnum<Media_coreCybertronState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Media_coreCybertronState *active __attribute__((swift_name("active")));
@property (class, readonly) Media_coreCybertronState *pending __attribute__((swift_name("pending")));
@property (class, readonly) Media_coreCybertronState *visiting __attribute__((swift_name("visiting")));
@property (class, readonly) Media_coreCybertronState *requested __attribute__((swift_name("requested")));
@property (class, readonly) Media_coreCybertronState *spectator __attribute__((swift_name("spectator")));
@property (class, readonly) Media_coreCybertronState *lurker __attribute__((swift_name("lurker")));
@property (class, readonly) Media_coreCybertronState *left __attribute__((swift_name("left")));
@property (class, readonly) Media_coreCybertronState *kicked __attribute__((swift_name("kicked")));
@property (class, readonly) Media_coreCybertronState *denied __attribute__((swift_name("denied")));
@property (class, readonly) Media_coreCybertronState *ignored __attribute__((swift_name("ignored")));
@property (class, readonly) Media_coreCybertronState *none __attribute__((swift_name("none")));
+ (Media_coreKotlinArray<Media_coreCybertronState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronMembershipRole")))
@interface Media_coreCybertronMembershipRole : Media_coreKotlinEnum<Media_coreCybertronMembershipRole *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Media_coreCybertronMembershipRoleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Media_coreCybertronMembershipRole *globalModerator __attribute__((swift_name("globalModerator")));
@property (class, readonly) Media_coreCybertronMembershipRole *creator __attribute__((swift_name("creator")));
@property (class, readonly) Media_coreCybertronMembershipRole *roomAdmin __attribute__((swift_name("roomAdmin")));
@property (class, readonly) Media_coreCybertronMembershipRole *host __attribute__((swift_name("host")));
@property (class, readonly) Media_coreCybertronMembershipRole *basic __attribute__((swift_name("basic")));
@property (class, readonly) Media_coreCybertronMembershipRole *nonMember __attribute__((swift_name("nonMember")));
+ (Media_coreKotlinArray<Media_coreCybertronMembershipRole *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronMembershipState")))
@interface Media_coreCybertronMembershipState : Media_coreKotlinEnum<Media_coreCybertronMembershipState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Media_coreCybertronMembershipStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Media_coreCybertronMembershipState *active __attribute__((swift_name("active")));
@property (class, readonly) Media_coreCybertronMembershipState *invited __attribute__((swift_name("invited")));
@property (class, readonly) Media_coreCybertronMembershipState *requested __attribute__((swift_name("requested")));
@property (class, readonly) Media_coreCybertronMembershipState *left __attribute__((swift_name("left")));
@property (class, readonly) Media_coreCybertronMembershipState *ignored __attribute__((swift_name("ignored")));
@property (class, readonly) Media_coreCybertronMembershipState *banned __attribute__((swift_name("banned")));
+ (Media_coreKotlinArray<Media_coreCybertronMembershipState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface Media_coreKotlinx_datetimeInstant : Media_coreBase <Media_coreKotlinComparable>
@property (class, readonly, getter=companion) Media_coreKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(Media_coreKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (Media_coreKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(Media_coreKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (Media_coreKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronCall")))
@interface Media_coreCybertronCall : Media_coreBase
- (instancetype)initWithId:(NSString *)id roomId:(NSString *)roomId createdAt:(Media_coreKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)updatedAt state:(NSString * _Nullable)state activeAt:(Media_coreKotlinx_datetimeInstant * _Nullable)activeAt caller:(Media_coreCybertronUser * _Nullable)caller publishers:(NSArray<Media_coreCybertronUser *> * _Nullable)publishers __attribute__((swift_name("init(id:roomId:createdAt:updatedAt:state:activeAt:caller:publishers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreCybertronCallCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component3 __attribute__((swift_name("component3()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (Media_coreKotlinx_datetimeInstant * _Nullable)component6 __attribute__((swift_name("component6()")));
- (Media_coreCybertronUser * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<Media_coreCybertronUser *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (Media_coreCybertronCall *)doCopyId:(NSString *)id roomId:(NSString *)roomId createdAt:(Media_coreKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(Media_coreKotlinx_datetimeInstant * _Nullable)updatedAt state:(NSString * _Nullable)state activeAt:(Media_coreKotlinx_datetimeInstant * _Nullable)activeAt caller:(Media_coreCybertronUser * _Nullable)caller publishers:(NSArray<Media_coreCybertronUser *> * _Nullable)publishers __attribute__((swift_name("doCopy(id:roomId:createdAt:updatedAt:state:activeAt:caller:publishers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable activeAt __attribute__((swift_name("activeAt")));
@property (readonly) Media_coreCybertronUser * _Nullable caller __attribute__((swift_name("caller")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<Media_coreCybertronUser *> * _Nullable publishers __attribute__((swift_name("publishers")));
@property (readonly) NSString *roomId __attribute__((swift_name("roomId")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@property (readonly) Media_coreKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronPermissions")))
@interface Media_coreCybertronPermissions : Media_coreBase
- (instancetype)initWithEditRoomProperties:(Media_coreCybertronPermissionState *)editRoomProperties controlStage:(Media_coreCybertronPermissionState *)controlStage changeMembership:(Media_coreCybertronPermissionState *)changeMembership clearHistory:(Media_coreCybertronPermissionState *)clearHistory seekMedia:(Media_coreCybertronPermissionState *)seekMedia postMessage:(Media_coreCybertronPermissionState *)postMessage postMedia:(Media_coreCybertronPermissionState *)postMedia postLink:(Media_coreCybertronPermissionState *)postLink uploadLocalMedia:(Media_coreCybertronPermissionState *)uploadLocalMedia sendInvite:(Media_coreCybertronPermissionState *)sendInvite sendReactions:(Media_coreCybertronPermissionState *)sendReactions goLiveVideoWithoutRequest:(Media_coreCybertronPermissionState *)goLiveVideoWithoutRequest goLiveAudioWithoutRequest:(Media_coreCybertronPermissionState *)goLiveAudioWithoutRequest roomRequestApproveGoLive:(Media_coreCybertronPermissionState *)roomRequestApproveGoLive inviteGoLiveAudio:(Media_coreCybertronPermissionState *)inviteGoLiveAudio inviteGoLiveVideo:(Media_coreCybertronPermissionState *)inviteGoLiveVideo deleteRoom:(Media_coreCybertronPermissionState *)deleteRoom __attribute__((swift_name("init(editRoomProperties:controlStage:changeMembership:clearHistory:seekMedia:postMessage:postMedia:postLink:uploadLocalMedia:sendInvite:sendReactions:goLiveVideoWithoutRequest:goLiveAudioWithoutRequest:roomRequestApproveGoLive:inviteGoLiveAudio:inviteGoLiveVideo:deleteRoom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Media_coreCybertronPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (Media_coreCybertronPermissionState *)component1 __attribute__((swift_name("component1()")));
- (Media_coreCybertronPermissionState *)component10 __attribute__((swift_name("component10()")));
- (Media_coreCybertronPermissionState *)component11 __attribute__((swift_name("component11()")));
- (Media_coreCybertronPermissionState *)component12 __attribute__((swift_name("component12()")));
- (Media_coreCybertronPermissionState *)component13 __attribute__((swift_name("component13()")));
- (Media_coreCybertronPermissionState *)component14 __attribute__((swift_name("component14()")));
- (Media_coreCybertronPermissionState *)component15 __attribute__((swift_name("component15()")));
- (Media_coreCybertronPermissionState *)component16 __attribute__((swift_name("component16()")));
- (Media_coreCybertronPermissionState *)component17 __attribute__((swift_name("component17()")));
- (Media_coreCybertronPermissionState *)component2 __attribute__((swift_name("component2()")));
- (Media_coreCybertronPermissionState *)component3 __attribute__((swift_name("component3()")));
- (Media_coreCybertronPermissionState *)component4 __attribute__((swift_name("component4()")));
- (Media_coreCybertronPermissionState *)component5 __attribute__((swift_name("component5()")));
- (Media_coreCybertronPermissionState *)component6 __attribute__((swift_name("component6()")));
- (Media_coreCybertronPermissionState *)component7 __attribute__((swift_name("component7()")));
- (Media_coreCybertronPermissionState *)component8 __attribute__((swift_name("component8()")));
- (Media_coreCybertronPermissionState *)component9 __attribute__((swift_name("component9()")));
- (Media_coreCybertronPermissions *)doCopyEditRoomProperties:(Media_coreCybertronPermissionState *)editRoomProperties controlStage:(Media_coreCybertronPermissionState *)controlStage changeMembership:(Media_coreCybertronPermissionState *)changeMembership clearHistory:(Media_coreCybertronPermissionState *)clearHistory seekMedia:(Media_coreCybertronPermissionState *)seekMedia postMessage:(Media_coreCybertronPermissionState *)postMessage postMedia:(Media_coreCybertronPermissionState *)postMedia postLink:(Media_coreCybertronPermissionState *)postLink uploadLocalMedia:(Media_coreCybertronPermissionState *)uploadLocalMedia sendInvite:(Media_coreCybertronPermissionState *)sendInvite sendReactions:(Media_coreCybertronPermissionState *)sendReactions goLiveVideoWithoutRequest:(Media_coreCybertronPermissionState *)goLiveVideoWithoutRequest goLiveAudioWithoutRequest:(Media_coreCybertronPermissionState *)goLiveAudioWithoutRequest roomRequestApproveGoLive:(Media_coreCybertronPermissionState *)roomRequestApproveGoLive inviteGoLiveAudio:(Media_coreCybertronPermissionState *)inviteGoLiveAudio inviteGoLiveVideo:(Media_coreCybertronPermissionState *)inviteGoLiveVideo deleteRoom:(Media_coreCybertronPermissionState *)deleteRoom __attribute__((swift_name("doCopy(editRoomProperties:controlStage:changeMembership:clearHistory:seekMedia:postMessage:postMedia:postLink:uploadLocalMedia:sendInvite:sendReactions:goLiveVideoWithoutRequest:goLiveAudioWithoutRequest:roomRequestApproveGoLive:inviteGoLiveAudio:inviteGoLiveVideo:deleteRoom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Media_coreCybertronPermissionState *changeMembership __attribute__((swift_name("changeMembership")));
@property (readonly) Media_coreCybertronPermissionState *clearHistory __attribute__((swift_name("clearHistory")));
@property (readonly) Media_coreCybertronPermissionState *controlStage __attribute__((swift_name("controlStage")));
@property (readonly) Media_coreCybertronPermissionState *deleteRoom __attribute__((swift_name("deleteRoom")));
@property (readonly) Media_coreCybertronPermissionState *editRoomProperties __attribute__((swift_name("editRoomProperties")));
@property (readonly) Media_coreCybertronPermissionState *goLiveAudioWithoutRequest __attribute__((swift_name("goLiveAudioWithoutRequest")));
@property (readonly) Media_coreCybertronPermissionState *goLiveVideoWithoutRequest __attribute__((swift_name("goLiveVideoWithoutRequest")));
@property (readonly) Media_coreCybertronPermissionState *inviteGoLiveAudio __attribute__((swift_name("inviteGoLiveAudio")));
@property (readonly) Media_coreCybertronPermissionState *inviteGoLiveVideo __attribute__((swift_name("inviteGoLiveVideo")));
@property (readonly) Media_coreCybertronPermissionState *postLink __attribute__((swift_name("postLink")));
@property (readonly) Media_coreCybertronPermissionState *postMedia __attribute__((swift_name("postMedia")));
@property (readonly) Media_coreCybertronPermissionState *postMessage __attribute__((swift_name("postMessage")));
@property (readonly) Media_coreCybertronPermissionState *roomRequestApproveGoLive __attribute__((swift_name("roomRequestApproveGoLive")));
@property (readonly) Media_coreCybertronPermissionState *seekMedia __attribute__((swift_name("seekMedia")));
@property (readonly) Media_coreCybertronPermissionState *sendInvite __attribute__((swift_name("sendInvite")));
@property (readonly) Media_coreCybertronPermissionState *sendReactions __attribute__((swift_name("sendReactions")));
@property (readonly) Media_coreCybertronPermissionState *uploadLocalMedia __attribute__((swift_name("uploadLocalMedia")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronRoom.Companion")))
@interface Media_coreCybertronRoomCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronRoomCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol Media_coreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<Media_coreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Media_coreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) Media_coreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Media_coreKotlinNothing : Media_coreBase
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Media_coreKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface Media_coreKotlinx_serialization_coreSerialKind : Media_coreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol Media_coreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<Media_coreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Media_coreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Media_coreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<Media_coreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) Media_coreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface Media_coreKoin_coreKind : Media_coreKotlinEnum<Media_coreKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Media_coreKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) Media_coreKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) Media_coreKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (Media_coreKotlinArray<Media_coreKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface Media_coreKoin_coreCallbacks<T> : Media_coreBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (Media_coreKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronMembershipRole.Companion")))
@interface Media_coreCybertronMembershipRoleCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronMembershipRoleCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronMembershipState.Companion")))
@interface Media_coreCybertronMembershipStateCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronMembershipStateCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface Media_coreKotlinx_datetimeInstantCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (Media_coreKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (Media_coreKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (Media_coreKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (Media_coreKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (Media_coreKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) Media_coreKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) Media_coreKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronCall.Companion")))
@interface Media_coreCybertronCallCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronCallCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronPermissionState")))
@interface Media_coreCybertronPermissionState : Media_coreKotlinEnum<Media_coreCybertronPermissionState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Media_coreCybertronPermissionStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Media_coreCybertronPermissionState *everyone __attribute__((swift_name("everyone")));
@property (class, readonly) Media_coreCybertronPermissionState *members __attribute__((swift_name("members")));
@property (class, readonly) Media_coreCybertronPermissionState *moderators __attribute__((swift_name("moderators")));
@property (class, readonly) Media_coreCybertronPermissionState *admins __attribute__((swift_name("admins")));
@property (class, readonly) Media_coreCybertronPermissionState *creator __attribute__((swift_name("creator")));
@property (class, readonly) Media_coreCybertronPermissionState *globalModerators __attribute__((swift_name("globalModerators")));
+ (Media_coreKotlinArray<Media_coreCybertronPermissionState *> *)values __attribute__((swift_name("values()")));
- (BOOL)isAllowedMembershipRole:(Media_coreCybertronMembershipRole * _Nullable)membershipRole __attribute__((swift_name("isAllowed(membershipRole:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronPermissions.Companion")))
@interface Media_coreCybertronPermissionsCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CybertronPermissionState.Companion")))
@interface Media_coreCybertronPermissionStateCompanion : Media_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Media_coreCybertronPermissionStateCompanion *shared __attribute__((swift_name("shared")));
- (id<Media_coreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
